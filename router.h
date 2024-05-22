#ifndef ROUTER_H
#define ROUTER_H

#include "node.h"
#include <iostream>

struct RoutingEntry {
public:
  Address destination;
  Link *nextLink;
  // RoutingEntry(Address a, Link* l):destination(a), nextLink(l){}
};

class Router : public Node {
protected:
  std::vector<RoutingEntry> routingTable_;
};

#endif