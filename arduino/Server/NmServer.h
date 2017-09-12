/*
 * NmServer.h
 *
 *  Created on: 09.09.2017
 *      Author: Martin
 */

#ifndef NMSERVER_H_
#define NMSERVER_H_

#include <Ethernet.h>


class HttpRequest;

typedef void (*RequestHandler)(const HttpRequest&, EthernetClient&);



class NmServer {
public:
	NmServer(int port);
	virtual ~NmServer();

	void setHttpRequestHandler(RequestHandler requestHandler);

	void begin();
	void handleRequest();

private:
	EthernetServer ethernetServer;
	RequestHandler httpRequestHandler;
};

#endif /* NMSERVER_H_ */
