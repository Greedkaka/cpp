#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "link.h"
#include "packet.h"
#include <vector>

using namespace std;

class Node {
  friend class LinkInstaller;

private:
  int id_;
  static int nextId_;

protected:
  std::vector<Link> link_;

public:
  Node() : id_(nextId_++) {}
  int id() const { return id_; }

  virtual void onReceive(Packet *packet)=0;
};

#endif