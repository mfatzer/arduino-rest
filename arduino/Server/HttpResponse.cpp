/*
 * HttpResponse.cpp
 *
 *  Created on: 09.09.2017
 *      Author: Martin
 */

#include "HttpResponse.h"
#include "Arduino.h"


HttpResponse::HttpResponse()
: refreshInSeconds(-1) {
}

HttpResponse::~HttpResponse() {
}

void HttpResponse::setReturnCode(String returnCode) {
	this->returnCode = returnCode;
}

void HttpResponse::setContentType(String contentType) {
	this->contentType = contentType;
}

void HttpResponse::setConnection(String connection) {
	this->connection = connection;
}

void HttpResponse::setRefresh(int refreshInSeconds) {
	this->refreshInSeconds = refreshInSeconds;
}

void HttpResponse::setBody(String body) {
	this->body = body;
}

String HttpResponse::toResponseString() {
	String response;
	response += "HTTP/1.1 " + this->returnCode + "\n";
	addHeader(response, "Content-Type", this->contentType);
	addHeader(response, "Connection", this->connection);
	if (this->returnValue.length() > 0) {
		addHeader(response, "ReturnValue", this->returnValue);
	}
	if (this->refreshInSeconds > 0) {
		addHeader(response, "Refresh", String(this->refreshInSeconds));
	}
	// Empty line after header
	response += "\n";
	response += this->body + "\n";
	return response;
}

void HttpResponse::addHeader(String& response, const String& key, const String& value) {
	response += key + ": " + value + "\n";
}

void HttpResponse::setReturnValue(String value) {
	this->returnValue = value;
}
