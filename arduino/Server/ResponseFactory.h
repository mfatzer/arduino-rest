/*
 * ResponseFactory.h
 *
 *  Created on: 10.09.2017
 *      Author: Martin
 */

#ifndef RESPONSEFACTORY_H_
#define RESPONSEFACTORY_H_

#include "HttpResponse.h"


class ResponseFactory {
private:
	ResponseFactory();

public:
	virtual ~ResponseFactory();

	static HttpResponse createOkHtmlResponse();
	static HttpResponse createResourceNotFoundResponse();
	static HttpResponse createMethodNotAllowedResponse();
	static HttpResponse createPlainOkResponse();
};

#endif /* RESPONSEFACTORY_H_ */
