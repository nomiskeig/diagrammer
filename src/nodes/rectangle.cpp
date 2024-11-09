#include "rectangle.h"

namespace Diagrammer {
void Rectangle::set_height(float height) {
    this->height = height;
}
void Rectangle::set_width(float width) {
    this->width = width;
}

void Rectangle::accept_visitor(Visitor * visitor) {
    visitor->visit_rectangle(this);
}

} // namespace Diagrammer
