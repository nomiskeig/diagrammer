#pragma once

namespace Diagrammer {
class Diagram;
class Rectangle;
class Visitor {
private:
public:
   virtual void visit_diagram(Diagram* diagram)=0;
    virtual void visit_rectangle(Rectangle * rectangle)=0;
};

};

