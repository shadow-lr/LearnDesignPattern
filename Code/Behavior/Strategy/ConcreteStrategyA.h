#pragma once

#include "Strategy.h"

class ConcreteStrategyA : public Strategy {
public:
    ConcreteStrategyA() {}

    ~ConcreteStrategyA() {}

    virtual void AlgorithmInterface() {
        std::cout << "ConcreteStrategyA::AlgorithmInterface" << "\n";
    }
};