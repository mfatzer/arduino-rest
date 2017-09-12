/*
 * HttpResponse.h
 *
 *  Created on: 09.09.2017
 *      Author: Martin
 */

#ifndef HTTPRESPONSE_H_
#define HTTPRESPONSE_H_

#include <Arduino.h>


class HttpResponse {
public:
	HttpResponse();
	virtual ~HttpResponse();

	void setReturnCode(String returnCode);
	void setContentType(String contentType);
	void setConnection(String connection);
	void setRefresh(int refreshInSeconds);
	void setBody(String body);
	void setReturnValue(String value);

	String toResponseString();

private:
	void addHeader(String& response, const String& key, const String& value);

private:
	String returnCode;
	String contentType;
	String connection;
	String returnValue;
	int refreshInSeconds;
	String body;
};

#endif /* HTTPRESPONSE_H_ */


