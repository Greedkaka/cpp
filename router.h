#ifndef ROUTER_H
#define ROUTER_H

#include "node.h"

struct RoutingEntry {
public:
  Address destination;
  Link *nextLink;

  RoutingEntry(Address d, Link* l):destination(d), nextLink(l){}
};

class Router : public Node {
protected:
  std::vector<RoutingEntry> routingTable_;

public:
  virtual ~Router() {}
  virtual void onReceive(Packet* packet) {
    for(int i =0, k=routingTable_.size(); i< k; i++) {
      RoutingEntry entry = routingTable_[i];
      if(entry.destination == packet->destAddress()) {
        entry.nextLink->onReceive(this, packet);
        break;
      }
    }
  }
};

#endif