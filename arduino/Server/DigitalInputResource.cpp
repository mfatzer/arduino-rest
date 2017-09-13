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
	String labelHeader = "label";
	String label = getLabel();
	String typeHeader = "type";
	String type = "DIGITAL_INPUT";
	String pinHeader = "pin";
	String pin = String(pinNr);
	String onHeader = "on";
	String on = valueAsString();

	String infoString;
	infoString += "{\n";
	addKeyValuePair(infoString, labelHeader, label, true);
	addKeyValuePair(infoString, typeHeader, type, true);
	addKeyValuePair(infoString, pinHeader, pin, true);
	addKeyValuePair(infoString, onHeader, on, false);
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
