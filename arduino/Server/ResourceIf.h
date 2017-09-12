/*
 * ResourceIf.h
 *
 *  Created on: 09.09.2017
 *      Author: Martin
 */

#ifndef RESOURCEIF_H_
#define RESOURCEIF_H_

#include <Arduino.h>
#include <Ethernet.h>
#include "HttpRequest.h"
#include "HttpResponse.h"


class ResourceIf {
public:
	enum Type {DIGITAL_OUT, DIGITAL_IN, RANGE_OUT, RANGE_IN, DATA_OUT, DATA_IN};

public:
	virtual ~ResourceIf() {};

	virtual boolean handleRequest(HttpRequest& request, EthernetClient& client) = 0;
	virtual boolean isResource(String& name) = 0;
	virtual String getLabel() = 0;
	virtual String getInfoString() = 0;
	virtual String getHtmlString() = 0;
	virtual Type getType() = 0;
};

#endif /* RESOURCEIF_H_ */
