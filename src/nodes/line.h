#pragma once
#include "../coord.h"
#include "../node.h"

namespace Diagrammer {
class Line : public Node {
private:
  Coord *start;
  Coord *end;
};

} // namespace Diagrammer
