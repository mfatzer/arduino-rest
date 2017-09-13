/*
 * AbstractResource.cpp
 *
 *  Created on: 10.09.2017
 *      Author: Martin
 */

#include "AbstractResource.h"
#include "ResponseFactory.h"


const String AbstractResource::REQUEST_VALUE_LABEL = "Value";


AbstractResource::AbstractResource(String label)
: label(label) {
}

AbstractResource::~AbstractResource() {
}

boolean AbstractResource::handleRequest(HttpRequest& request, EthernetClient& client) {
//	if (request.getUri() != getLabel()) {
//		HttpResponse response = ResponseFactory::createResourceNotFoundResponse();
//		client.print(response.toResponseString());
//		return false;
//	}

	if (request.isGetRequest() || request.isPutRequest()) {
		if (request.isPutRequest()) {
			applyStringValue(request.getHeaderValue(REQUEST_VALUE_LABEL));
		}
		HttpResponse response = ResponseFactory::createPlainOkResponse();
		response.setReturnValue(valueAsString());
		client.print(response.toResponseString());
		return true;
	}
	HttpResponse response = ResponseFactory::createMethodNotAllowedResponse();
	client.print(response.toResponseString());
	return false;
}

String AbstractResource::getLabel() {
	return this->label;
}

boolean AbstractResource::isResource(String& name) {
	return getLabel() == name;
}

void AbstractResource::addKeyValuePair(String& output, String& key, String& value, boolean insertColon) {
	output += "\"" + key + "\"" + ": " + "\"" + value + "\"";
	if (insertColon == true) {
		output += ",";
	}
	output += "\n";
}
