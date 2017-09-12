/*
 * ResourceRepo.cpp
 *
 *  Created on: 09.09.2017
 *      Author: Martin
 */

#include "ResourceRepo.h"
#include <Ethernet.h>
#include "HttpResponse.h"
#include "ResponseFactory.h"


ResourceRepo::ResourceRepo(ResourceIf* resources[], unsigned int resourceCount)
: resources(resources), resourceCount(resourceCount) {

}

ResourceRepo::~ResourceRepo() {
}

boolean ResourceRepo::handleRequest(HttpRequest request, EthernetClient& client) {
	if (request.isGetRequest() && request.getUri() == "/") {
		sendDataInfo(client);
		return true;
	}
	for (unsigned int i = 0; i < resourceCount; ++i) {
    	ResourceIf* resource = resources[i];
    	if (isMatch(request.getUri(), resource)) {
    		resource->handleRequest(request, client);
    		return true;
    	}
    }
    HttpResponse response = ResponseFactory::createResourceNotFoundResponse();
    client.print(response.toResponseString());
    return false;
}

void ResourceRepo::sendHtmlInfo(EthernetClient& client) {
	HttpResponse response = ResponseFactory::createOkHtmlResponse();
	response.setRefresh(3);

	String body;
    body += "<!DOCTYPE HTML>\n";
    body += "<html>\n";
    for (unsigned int i = 0; i < resourceCount; ++i) {
    	ResourceIf* resource = resources[i];
    	body += resource->getHtmlString() + "<br />";
    }
    body += "</html>\n";

    response.setBody(body);
	client.print(response.toResponseString());
}

void ResourceRepo::sendDataInfo(EthernetClient& client) {
	HttpResponse response = ResponseFactory::createPlainOkResponse();

	String body;
	body += "{\n";
	body += "configuration: [\n";
    // output the value of each analog input pin
    for (unsigned int i = 0; i < resourceCount; ++i) {
    	ResourceIf* resource = resources[i];
    	body += resource->getInfoString();
    	boolean isLastElement = (i == (resourceCount - 1));
    	if (! isLastElement) {
    		body += ",";
    	}
    }
    body += "]\n";
    body += "}\n";

	response.setBody(body);
	client.print(response.toResponseString());
}

boolean ResourceRepo::isMatch(String uri, ResourceIf* resource) {
	return uri.endsWith(resource->getLabel());
}
