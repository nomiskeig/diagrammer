
#include "./diagram.h"
#include <stdio.h>
namespace Diagrammer {
void Diagram::add_node(Node *node) { this->nodes.push_back(node); }
void Diagram::accept_visitor(Visitor *visitor) {
  for (size_t i = 0; i < this->nodes.size(); i++) {
    this->nodes[i]->accept_visitor(visitor);
  }
};
}; // namespace Diagrammer
