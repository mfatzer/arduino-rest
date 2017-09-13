/*
 * DigitalOutputResource.cpp
 *
 *  Created on: 10.09.2017
 *      Author: Martin
 */

#include <Arduino.h>
#include "DigitalOutputResource.h"
#include "ResponseFactory.h"


const String DigitalOutputResource::HIGH_VALUE_STR = "HIGH";
const String DigitalOutputResource::LOW_VALUE_STR = "LOW";



DigitalOutputResource::DigitalOutputResource(String label, int pinNr, boolean initialValue)
: AbstractResource(label), pinNr(pinNr) {
	pinMode(pinNr, OUTPUT);
	switchOn(initialValue);
}

DigitalOutputResource::~DigitalOutputResource() {
}

String DigitalOutputResource::getInfoString() {
	String labelHeader = "label";
	String label = getLabel();
	String typeHeader = "type";
	String type = "DIGITAL_OUTPUT";
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

String DigitalOutputResource::getHtmlString() {
	return "Digital Output \"" + getLabel() + "\" (" + String(pinNr) + ") is " + valueAsString();
}

DigitalOutputResource::Type DigitalOutputResource::getType() {
	return Type::DIGITAL_OUT;
}

void DigitalOutputResource::switchOn(boolean on) {
	digitalWrite(pinNr, on);
}

boolean DigitalOutputResource::isOn() {
	return digitalRead(pinNr);
}

String DigitalOutputResource::valueAsString() {
	return (isOn()) ? HIGH_VALUE_STR : LOW_VALUE_STR;
}

void DigitalOutputResource::applyStringValue(String value) {
	if (value == HIGH_VALUE_STR) {
		switchOn(true);
	}
	else if (value == LOW_VALUE_STR) {
		switchOn(false);
	}
}
