#ifndef ROUTER_H
#define ROUTER_H

#include "node.h"
#include <iostream>

struct RoutingEntry {
public:
  Address destination;
  Link *nextLink;
};

class Router : public Node {
protected:
  Router(){}
  std::vector<RoutingEntry> routingTable_;
};

#endif