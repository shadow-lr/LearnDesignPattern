#pragma once

#include "ConcreteComponent.h"
#include "Decorator.h"

// ConcreteDecorator就是具体的装饰对象之三，起到给Component添加职责的功能
class ConcreteDecoratorC : public Decorator {
public:
    ConcreteDecoratorC(const std::shared_ptr<Component> &component) : Decorator(component) {}

    virtual ~ConcreteDecoratorC() {
        std::cout << "~ConcreteDecoratorC destructure" << "\n";
    }

    void Operation() override {
        this->component->Operation();
        // 附加职责A
        this->AddBehaviorC();
    }

    void AddBehaviorC() {
        std::cout << "附加职责C：ConcreteDecoratorC::AddBehaviorC" << "\n";
    }
};
