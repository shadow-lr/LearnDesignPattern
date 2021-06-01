#pragma once

#include "ConcreteComponent.h"
#include "Decorator.h"

// ConcreteDecorator就是具体的装饰对象之四，起到给Component添加职责的功能
class ConcreteDecoratorD : public Decorator {
public:
    ConcreteDecoratorD(const std::shared_ptr<Component> &component) : Decorator(component) {}

    virtual ~ConcreteDecoratorD() {
        std::cout << "~ConcreteDecoratorD destructure" << "\n";
    }

    void Operation() override {
        this->component->Operation();
        // 附加职责A
        this->AddBehaviorD();
    }

    void AddBehaviorD() {
        std::cout << "附加职责D：ConcreteDecoratorD::AddBehaviorD" << "\n";
    }
};
