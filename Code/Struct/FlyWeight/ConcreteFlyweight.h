#pragma once

#include "Flyweight.h"

class ConcreteFlyweight : public Flyweight {
public:
    ConcreteFlyweight(const std::string &_state) : Flyweight(_state) {
        std::cout << "ConcreteFlyweight Build..." << this->state << "\n";
    }

    void Operation(const std::string &state) {
        std::cout << "ConcreteFlyweight " << GetState() << " \\ " << this->state << "\n";
    }

    virtual ~ConcreteFlyweight() {}
};