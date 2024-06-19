#ifndef ROUTER_H
#define ROUTER_H

#include "node.h"
#include <iostream>

struct RoutingEntry {
public:
  Address destination;
  Link *nextLink;

  RoutingEntry(Address d, Link* l):destination(d), nextLink(l){}
};

class Router : public Node {
protected:
  Router(){}
  std::vector<RoutingEntry> routingTable_;

  virtual void onReceive(Packet* packet) {
    for(int i =0 ; i< routingTable_.size(); i++) {
      RoutingEntry entry = routingTable_[i];
      if(entry.destination == packet->destAddress()) {
        entry.nextLink->onReceive(this, packet);
        break;
      }
    }
  }
};

#endif