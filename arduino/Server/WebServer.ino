/*
  Web Server

 A simple web server that shows the value of the analog input pins.
 using an Arduino Wiznet Ethernet shield.

 Circuit:
 * Ethernet shield attached to pins 10, 11, 12, 13
 * Analog inputs attached to pins A0 through A5 (optional)

 created 18 Dec 2009
 by David A. Mellis
 modified 9 Apr 2012
 by Tom Igoe
 modified 02 Sept 2015
 by Arturo Guadalupi

 */

#include <Arduino.h>
#include <SPI.h>
#include <Ethernet.h>
#include "NmServer.h"
#include "HttpRequest.h"
#include "HttpResponse.h"
#include "ResourceRepo.h"
#include "DigitalOutputResource.h"
#include "DigitalInputResource.h"
#include "AnalogOutputResource.h"


// Enter a MAC address and IP address for your controller below.
// The IP address will be dependent on your local network:
byte mac[] = {
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
};
IPAddress ip(192, 168, 1, 177);

// Initialize the Ethernet server library
// with the IP address and port you want to use
// (port 80 is default for HTTP):
NmServer nmServer80(80);
NmServer nmServer8080(8080);

DigitalInputResource  switch1("Switch1", 10);
AnalogOutputResource lampe1("Lampe1", 11, 0, 0, 255, 0, 255);
DigitalOutputResource lampe2("Lampe2", 12, true);
DigitalOutputResource lampe3("Lampe3", 13, true);
AnalogOutputResource dimmer1("Dimmer1", 8, 0, 0, 1000, 0, 1000);

ResourceIf* resources[] = {
		&switch1,
		&lampe1,
		&lampe2,
		&lampe3,
		&dimmer1
	};


ResourceRepo repo(resources, 5);


void httpPort80Handler(const HttpRequest& request, EthernetClient& client) {
	repo.sendHtmlInfo(client);
}

void httpPort8080Handler(const HttpRequest& request, EthernetClient& client) {
	repo.handleRequest(request, client);
}

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // start the Ethernet connection and the server:
  Ethernet.begin(mac, ip);


  // start the Ethernet connection and the server:
  nmServer80.setHttpRequestHandler(httpPort80Handler);
  nmServer80.begin();
  nmServer8080.setHttpRequestHandler(httpPort8080Handler);
  nmServer8080.begin();


  Serial.print("server is at ");
  Serial.println(Ethernet.localIP());
}


void loop() {
  // listen for incoming clients
	  nmServer80.handleRequest();
	  nmServer8080.handleRequest();
}

