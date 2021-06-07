#pragma once

#include "Strategy.h"

class ConcreteStrategyB : public Strategy {
public:
    ConcreteStrategyB() {}

    ~ConcreteStrategyB() {}

    void AlgorithmInterface() override {
        std::cout << "ConcreteStrategyB::AlgorithmInterface" << "\n";
    }
};