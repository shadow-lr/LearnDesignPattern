#pragma once

#include "ConcreteComponent.h"
#include "Decorator.h"

// ConcreteDecorator���Ǿ����װ�ζ���֮һ���𵽸�Component���ְ��Ĺ���
class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(const std::shared_ptr<Component> &component) : Decorator(component) {}

    virtual ~ConcreteDecoratorA() {
        std::cout << "~ConcreteDecoratorA destructure" << "\n";
    }

    void Operation() override {
        this->component->Operation();
        // ����ְ��A
        this->AddBehaviorA();
    }

    void AddBehaviorA() {
        std::cout << "����ְ��A��ConcreteDecoratorA::AddBehaviorA" << "\n";
    }
};
