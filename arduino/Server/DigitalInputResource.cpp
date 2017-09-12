/*
 * DigitalInputResource.cpp
 *
 *  Created on: 10.09.2017
 *      Author: Martin
 */

#include <Arduino.h>
#include "DigitalInputResource.h"


const String DigitalInputResource::HIGH_VALUE_STR = "HIGH";
const String DigitalInputResource::LOW_VALUE_STR = "LOW";


DigitalInputResource::DigitalInputResource(String label, int pinNr)
: AbstractResource(label), pinNr(pinNr) {
	pinMode(pinNr, INPUT);
}

DigitalInputResource::~DigitalInputResource() {
}

String DigitalInputResource::getInfoString() {
	String infoString;
	infoString += "{\n";
	infoString += "label: " + getLabel() + ",\n";
	infoString += "type: ";
	infoString += "DIGITAL_INPUT,\n";
	infoString += "pin: " + String(pinNr) + ",\n";
	infoString += "on: " + valueAsString() + "\n";
	infoString += "}\n";
	return infoString;
}

String DigitalInputResource::getHtmlString() {
	return "Digital Input \"" + getLabel() + "\" (" + String(pinNr) + ") is " + valueAsString();
}

DigitalInputResource::Type DigitalInputResource::getType() {
	return Type::DIGITAL_IN;
}

boolean DigitalInputResource::isOn() {
	return digitalRead(this->pinNr);
}

String DigitalInputResource::valueAsString() {
	return (isOn()) ? HIGH_VALUE_STR : LOW_VALUE_STR;
}

void DigitalInputResource::applyStringValue(String value) {
	// Do nothing
}
