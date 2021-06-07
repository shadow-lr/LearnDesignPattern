#pragma once

#include "Visitor.h"

class Element {
public:
    virtual ~Element() {}

    virtual void Accept(Visitor *visitor) {}
};