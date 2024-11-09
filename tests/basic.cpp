#include <iostream>
using namespace std;
#include "../src/diagram.h"
#include "../src/nodes/rectangle.h"

namespace Diagrammer {
void create_diagram(Diagram *diagram) {
  Rectangle *rect1 = new Rectangle();
  rect1->set_width(10.0);
  rect1->set_height(10.0);
  diagram->add_node(rect1);
}

} // namespace Diagrammer
