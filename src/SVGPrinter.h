#pragma once

#include "visitor.h"
#include <cstdio>
namespace Diagrammer {
class SVGPrinter : public Visitor {
private:
    FILE* file;
    void open_file();
    void print_begin();
    void print_end();
    void close_file();
public:
    void visit_rectangle(Rectangle* rect);
    void visit_diagram(Diagram* diagram);
    void print_diagram(Diagram* diagram);
    

};
}; // namespace Diagrammer
