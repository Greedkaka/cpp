#ifndef MANUAL_ROUTER_H
#define MANUAL_ROUTER_H

#include "address.h"
#include "router.h"

class ManualRouter : public Router {

public:
  // 목적지 주소에 따른 다음 링크를 설정한다.
  void addRoutingEntry(const Address &destination, Link *nextLink){
    // routingTable_.push_back(new RoutingEntry(destination, nextLink));
    RoutingEntry r_e;
    r_e.destination=destination;
    r_e.nextLink=nextLink;
    routingTable_.push_back(r_e);
  }
  // void pac_for(){
  //   std::cout<<"Router #"<<<<" :forwarding packet (from: "<<<<", to: "<<<<", "<<<<" bytes)"<<std::endl;
  // }
};

#endif