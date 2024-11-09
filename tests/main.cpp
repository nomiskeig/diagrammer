#include <dlfcn.h>

#include "../src/diagram.h"
#include "../src/SVGPrinter.h"
#include <err.h>
#include <stdio.h>
#include <stdlib.h>

using namespace Diagrammer;
int main() {
    
    Diagram *diagram = new Diagrammer::Diagram();
    Diagrammer::create_diagram(diagram);
    SVGPrinter* printer = new SVGPrinter();
    diagram->accept_visitor(printer);

    
};
