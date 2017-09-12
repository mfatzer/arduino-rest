/*
 * AnalogOutput.cpp
 *
 *  Created on: 10.09.2017
 *      Author: Martin
 */

#include "AnalogOutputResource.h"


AnalogOutputResource::AnalogOutputResource(String label, int pinNr, int initialValue, int userMin, int userMax, int internalMin, int internalMax)
: AbstractResource(label), pinNr(pinNr), userMin(userMin), userMax(userMax), internalMin(internalMin), internalMax(internalMax) {
	pinMode(pinNr, OUTPUT);
	setValue(initialValue);
}

AnalogOutputResource::~AnalogOutputResource() {
}

String AnalogOutputResource::getInfoString() {
	String infoString;
	infoString += "{\n";
	infoString += "label: " + getLabel() + ",\n";
	infoString += "type: ";
	infoString += "ANALOG_OUTPUT,\n";
	infoString += "pin: " + String(pinNr) + ",\n";
	infoString += "value: " + valueAsString() + "\n";
	infoString += "min: " + String(userMin) + "\n";
	infoString += "max: " + String(userMax) + "\n";
	infoString += "}\n";
	return infoString;
}

String AnalogOutputResource::getHtmlString() {
	return "Analog Output \"" + getLabel() + "\" (" + String(pinNr) + ") is " + valueAsString();
}

AnalogOutputResource::Type AnalogOutputResource::getType() {
	return Type::RANGE_OUT;
}

void AnalogOutputResource::setValue(int value) {
	this->userValue = value;
	analogWrite(pinNr, map(this->userValue, this->userMin, this->userMax, this->internalMin, this->internalMax));
}

int AnalogOutputResource::getValue() {
	return this->userValue;
}

String AnalogOutputResource::valueAsString() {
	return String(this->userValue);
}

void AnalogOutputResource::applyStringValue(String value) {
	setValue(value.toInt());
}
