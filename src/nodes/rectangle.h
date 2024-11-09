#pragma once

#include <vector>
#include "node.h"

namespace Diagrammer {
class Rectangle :public Node{
private:
    float width, height;
    float line_width = 1;
public:
    void set_height(float height);
    void set_width(float width);
    void accept_visitor(Visitor* visitor);
};

}; // namespace Diagrammer
