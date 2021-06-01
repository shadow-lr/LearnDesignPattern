#pragma once

#include "ConcreteComponent.h"
#include "Decorator.h"

// 只添加一种装饰，则不用抽象出装饰基类
class DecoratorOnlyOne : public Component {
public:
    DecoratorOnlyOne() {}

    DecoratorOnlyOne(const std::shared_ptr<Component> &_component) : component(_component) {}

    virtual ~DecoratorOnlyOne() {
        std::cout << "~DecoratorOnlyOne" << "\n";
        component.reset();
        component = nullptr;
    }

    virtual void Operation() {
        this->component->Operation();
        this->AddBehavior();
    }

    void AddBehavior() {
        std::cout << "附加唯一职责：DecoratorOnlyOne::AddBehavior" << "\n";
    }

private:
    std::shared_ptr<Component> component;
};
