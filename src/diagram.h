#pragma once
#include "nodes/node.h"
#include <vector>
#include "visitable.h"
namespace Diagrammer {

class Diagram : public Visitable {
private:
  std::vector<Node *> nodes;

public:
  void add_node(Node *node);
  void accept_visitor(Visitor *visitor);
};
void create_diagram(Diagram *diagram);

}; // namespace Diagrammer
