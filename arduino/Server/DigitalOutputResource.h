/*
 * DigitalOutputResource.h
 *
 *  Created on: 10.09.2017
 *      Author: Martin
 */

#ifndef DIGITALOUTPUTRESOURCE_H_
#define DIGITALOUTPUTRESOURCE_H_

#include "AbstractResource.h"


class DigitalOutputResource : public AbstractResource {
public:
	static const String HIGH_VALUE_STR;
	static const String LOW_VALUE_STR;

public:
	DigitalOutputResource(String label, int pinNr, boolean initialValue);
	virtual ~DigitalOutputResource();

	virtual String getInfoString();
	virtual String getHtmlString();
	virtual Type getType();

	virtual void switchOn(boolean on);
	virtual boolean isOn();

protected:
	virtual String valueAsString();
	virtual void applyStringValue(String value);

private:
	int pinNr;
};

#endif /* DIGITALOUTPUTRESOURCE_H_ */
