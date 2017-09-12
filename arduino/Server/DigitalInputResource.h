/*
 * DigitalInputResource.h
 *
 *  Created on: 10.09.2017
 *      Author: Martin
 */

#ifndef DIGITALINPUTRESOURCE_H_
#define DIGITALINPUTRESOURCE_H_

#include "AbstractResource.h"


class DigitalInputResource : public AbstractResource {
public:
	static const String HIGH_VALUE_STR;
	static const String LOW_VALUE_STR;

public:
	DigitalInputResource(String label, int pinNr);
	virtual ~DigitalInputResource();

	virtual String getInfoString();
	virtual String getHtmlString();
	virtual Type getType();

	virtual boolean isOn();

	virtual String valueAsString();
	virtual void applyStringValue(String value);

private:
	int pinNr;
};

#endif /* DIGITALINPUTRESOURCE_H_ */
