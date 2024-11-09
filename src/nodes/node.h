#pragma once
#include <vector>
#include "../visitor.h"

namespace Diagrammer {

class Node {
private:
  std::vector<Node> nodes;
public:
    virtual void accept_visitor(Visitor* visitor)=0;
};

}; // namespace Diagrammer
