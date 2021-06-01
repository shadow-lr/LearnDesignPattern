#pragma once

#include "Component.h"

//ConcreteDecorator：具体的Component对象，可以给该对象动态 添加职责
class ConcreteComponent : public Component {
public:
    ConcreteComponent() {}

    virtual ~ConcreteComponent() {
        std::cout << "~ConcreteComponent" << "\n";
    }

    virtual void Operation() override {
        std::cout << "原职责：ConcreteComponent::Operation" << "\n";
    }
};