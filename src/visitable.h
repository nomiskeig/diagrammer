#pragma once
#include "visitor.h"
namespace Diagrammer {
class Visitable {
public:
    void accept_visitor(Visitor* visitor);
};
    

};
