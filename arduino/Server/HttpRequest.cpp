/*
 * HttpRequest.cpp
 *
 *  Created on: 09.09.2017
 *      Author: Martin
 */

#include "HttpRequest.h"


const String HttpRequest::GET_VERB = "GET";
const String HttpRequest::PUT_VERB = "PUT";


HttpRequest::HttpRequest(String request)
: rawRequest(request) {
	parseRequest(request);
}

HttpRequest::~HttpRequest() {
}

String HttpRequest::getMessageString() const {
	return this->rawRequest;
}

boolean HttpRequest::isGetRequest() const {
	return method == GET_VERB;
}

boolean HttpRequest::isPutRequest() const {
	return method == PUT_VERB;
}

String HttpRequest::getHeaderValue(String key) {
	int startIndex = 0;
	int nextLineStartIndex = 0;

	while (startIndex >= 0) {
		nextLineStartIndex = getNextLineStartIndex(headers, startIndex);
		String line = getLine(headers, startIndex, nextLineStartIndex);
		startIndex = nextLineStartIndex;
		if (getKey(line) == key) {
			return getValue(line);
		}
		headers += line;
	}
	return "";
}

String HttpRequest::getUri() {
	return this->uri;
}


String HttpRequest::toString() const {
	String result;
	result += "Method: " + method + "\n";
	result += "URI: " + uri + "\n";
	result += "Header:\n";
	result += headers;
	result += "Body:\n";
	result += body;
	return result;
}

void HttpRequest::parseRequest(String request) {
	int startIndex = 0;
	int nextLineStartIndex = 0;

	// Request Line
	nextLineStartIndex = getNextLineStartIndex(request, startIndex);
	String requestLine = getLine(request, startIndex, nextLineStartIndex);
	parseRequestLine(requestLine);
	startIndex = nextLineStartIndex;

	// Header
	while (startIndex >= 0) {
		nextLineStartIndex = getNextLineStartIndex(request, startIndex);
		String line = getLine(request, startIndex, nextLineStartIndex);
		startIndex = nextLineStartIndex;
		if (line.length() == 0) {
			break;
		}
		headers += line;
	}

	// Body
	while (startIndex >= 0) {
		nextLineStartIndex = getNextLineStartIndex(request, startIndex);
		String line = getLine(request, startIndex, nextLineStartIndex);
		startIndex = nextLineStartIndex;
		body += line;
	}
}

void HttpRequest::parseRequestLine(String& requestLine) {
	int startIndex = 0;
	int nextSpacerIndex = requestLine.indexOf(" ", startIndex);
	method = requestLine.substring(startIndex, nextSpacerIndex);
	startIndex = nextSpacerIndex + 1;
	nextSpacerIndex = requestLine.indexOf(" ", startIndex);
	uri = requestLine.substring(startIndex, nextSpacerIndex);
}

int HttpRequest::getNextLineStartIndex(String& request, int startIndex) {
	unsigned int result = request.indexOf("\n", startIndex) + 1;
	return (result < request.length()) ? result : -1;
}

String HttpRequest::getLine(String& request, int startIndex, int nextLineStartIndex) {
	return request.substring(startIndex, (nextLineStartIndex != -1) ? nextLineStartIndex : request.length() - 1);
}

String HttpRequest::getKey(String& headerLine) {
	String result;
	int colonIndex = headerLine.indexOf(":");
	if (colonIndex >= 0) {
		result = headerLine.substring(0, colonIndex);
		result.trim();
	}
	return result;
}

String HttpRequest::getValue(String& headerLine) {
	String result;
	int colonIndex = headerLine.indexOf(":");
	if (colonIndex >= 0) {
		result = headerLine.substring(colonIndex + 1);
		result.trim();
	}
	return result;
}
