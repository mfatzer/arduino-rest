/*
 * AnalogOutput.h
 *
 *  Created on: 10.09.2017
 *      Author: Martin
 */

#ifndef ANALOGOUTPUTRESOURCE_H_
#define ANALOGOUTPUTRESOURCE_H_

#include "AbstractResource.h"


class AnalogOutputResource : public AbstractResource {
public:
	AnalogOutputResource(String label, int pinNr, int initialValue, int userMin, int userMax, int internalMin, int internalMax);
	virtual ~AnalogOutputResource();

	virtual String getInfoString();
	virtual String getHtmlString();
	virtual Type getType();

	virtual void setValue(int value);
	virtual int getValue();

protected:
	virtual String valueAsString();
	virtual void applyStringValue(String value);

private:
	const int pinNr;
	int userValue;
	const int userMin;
	const int userMax;
	const int internalMin;
	const int internalMax;
};

#endif /* ANALOGOUTPUTRESOURCE_H_ */
