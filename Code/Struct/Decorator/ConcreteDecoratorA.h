#pragma once

#include "ConcreteComponent.h"
#include "Decorator.h"

// ConcreteDecorator就是具体的装饰对象之一，起到给Component添加职责的功能
class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(const std::shared_ptr<Component> &component) : Decorator(component) {}

    virtual ~ConcreteDecoratorA() {
        std::cout << "~ConcreteDecoratorA destructure" << "\n";
    }

    void Operation() override {
        this->component->Operation();
        // 附加职责A
        this->AddBehaviorA();
    }

    void AddBehaviorA() {
        std::cout << "附加职责A：ConcreteDecoratorA::AddBehaviorA" << "\n";
    }
};
