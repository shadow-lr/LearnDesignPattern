#pragma once

#include "ConcreteComponent.h"
#include "Decorator.h"

// ConcreteDecorator就是具体的装饰对象之二，起到给Component添加职责的功能
class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(const std::shared_ptr<Component> &component) : Decorator(component) {}

    virtual ~ConcreteDecoratorB() {
        std::cout << "~ConcreteDecoratorB destructure" << "\n";
    }

    void Operation() override {
        this->component->Operation();
        // 附加职责A
        this->AddBehaviorB();
    }

    void AddBehaviorB() {
        std::cout << "附加职责B：ConcreteDecoratorB::AddBehaviorB" << "\n";
    }
};
