/*
 * AbstractResource.h
 *
 *  Created on: 10.09.2017
 *      Author: Martin
 */

#ifndef ABSTRACTRESOURCE_H_
#define ABSTRACTRESOURCE_H_

#include "ResourceIf.h"


class AbstractResource : public ResourceIf {
public:
	static const String REQUEST_VALUE_LABEL;

public:
	AbstractResource(String label);
	virtual ~AbstractResource() = 0;

	virtual boolean handleRequest(HttpRequest& request, EthernetClient& client);
	virtual String getLabel();
	virtual boolean isResource(String& name);

protected:
	virtual String valueAsString() = 0;
	virtual void applyStringValue(String value) = 0;

private:
	String label;
};

#endif /* ABSTRACTRESOURCE_H_ */
