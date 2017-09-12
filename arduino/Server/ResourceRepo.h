/*
 * ResourceRepo.h
 *
 *  Created on: 09.09.2017
 *      Author: Martin
 */

#ifndef RESOURCEREPO_H_
#define RESOURCEREPO_H_

#include "HttpRequest.h"
#include "ResourceIf.h"

class EthernetClient;


class ResourceRepo {
public:
	ResourceRepo(ResourceIf* resources[], unsigned int resourceCount);
	virtual ~ResourceRepo();

	boolean handleRequest(HttpRequest request, EthernetClient& client);
	void sendHtmlInfo(EthernetClient& client);
	void sendDataInfo(EthernetClient& client);

private:
	boolean isMatch(String uri, ResourceIf* resource);

private:
	ResourceIf** resources;
	unsigned int resourceCount;
};

#endif /* RESOURCEREPO_H_ */
