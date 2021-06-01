#pragma once

#include "ConcreteComponent.h"
#include "Decorator.h"

// ֻ���һ��װ�Σ����ó����װ�λ���
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
        std::cout << "����Ψһְ��DecoratorOnlyOne::AddBehavior" << "\n";
    }

private:
    std::shared_ptr<Component> component;
};
