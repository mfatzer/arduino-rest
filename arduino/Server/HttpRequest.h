/*
 * HttpRequest.h
 *
 *  Created on: 09.09.2017
 *      Author: Martin
 */

#ifndef HTTPREQUEST_H_
#define HTTPREQUEST_H_

#include <Arduino.h>


class HttpRequest {
public:
	static const String GET_VERB;
	static const String PUT_VERB;

public:
	HttpRequest(String request);
	virtual ~HttpRequest();

	String getMessageString() const;
	boolean isGetRequest() const;
	boolean isPutRequest() const;
	String getHeaderValue(String key);
	String getUri();

	String toString() const;

private:
	void parseRequest(String request);
	void parseRequestLine(String& requestLine);
	int getNextLineStartIndex(String& request, int startIndex);
	String getLine(String& request, int startIndex, int nextLineStartIndex);
	String getKey(String& headerLine);
	String getValue(String& headerLine);

private:
	String rawRequest;

	String method;
	String uri;
	String headers;
	String body;
};

#endif /* HTTPREQUEST_H_ */
