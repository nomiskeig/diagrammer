#pragma once

#include "visitor.h"
namespace Diagrammer {
class SVGPrinter : public Visitor {
public:
    void visit_rectangle(Rectangle* rect);
    void visit_diagram(Diagram* diagram);
    

};
}; // namespace Diagrammer
