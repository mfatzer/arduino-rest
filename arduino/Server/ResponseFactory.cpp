/*
 * ResponseFactory.cpp
 *
 *  Created on: 10.09.2017
 *      Author: Martin
 */

#include "ResponseFactory.h"

ResponseFactory::ResponseFactory() {
	// TODO Auto-generated constructor stub

}

ResponseFactory::~ResponseFactory() {
}

HttpResponse ResponseFactory::createOkHtmlResponse() {
	HttpResponse response;
	response.setReturnCode("200 OK");
	response.setContentType("text/html");
	response.setConnection("close");
	return response;
}

HttpResponse ResponseFactory::createResourceNotFoundResponse() {
	HttpResponse response;
	response.setReturnCode("404 Not Found");
	response.setContentType("text/plain");
	response.setConnection("close");
	return response;
}

HttpResponse ResponseFactory::createMethodNotAllowedResponse() {
	HttpResponse response;
	response.setReturnCode("405 Method Not Allowed");
	response.setContentType("text/plain");
	response.setConnection("close");
	return response;
}

HttpResponse ResponseFactory::createPlainOkResponse() {
	HttpResponse response;
	response.setReturnCode("200 OK");
	response.setContentType("text/plain");
	response.setConnection("close");
	return response;
}
