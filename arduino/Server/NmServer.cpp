/*
 * NmServer.cpp
 *
 *  Created on: 09.09.2017
 *      Author: Martin
 */

#include "NmServer.h"
#include "HttpRequest.h"
#include <SPI.h>


NmServer::NmServer(int port)
: ethernetServer(port), httpRequestHandler(NULL) {
}

NmServer::~NmServer() {
}

void NmServer::setHttpRequestHandler(RequestHandler requestHandler) {
	this->httpRequestHandler = requestHandler;
}

void NmServer::begin() {
	ethernetServer.begin();
}

void NmServer::handleRequest() {
	EthernetClient client = ethernetServer.available();
	if (client) {
		Serial.println("Client connected");
		String request;

		while (client.connected()) {
			while (client.available()) {
				request += (char) client.read();
			}
			HttpRequest httpRequest(request);
			if (this->httpRequestHandler != NULL) {
				this->httpRequestHandler(httpRequest, client);
			}
			else {
				Serial.println("NmServer::handleRequest(): Unknown Verb");
			}
			// close the connection:
			client.stop();
		}

		// give the web browser time to receive the data
		delay(1);
		Serial.println("client disconnected");
	}
}
