#pragma once

#include "Element.h"
#include "ConcreteElement.h"

class Element;

class Visitor {
public:
    virtual ~Visitor() {}

    virtual void Visit(Element *element) {}
};