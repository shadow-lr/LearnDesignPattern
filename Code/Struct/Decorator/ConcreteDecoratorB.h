#pragma once

#include "ConcreteComponent.h"
#include "Decorator.h"

// ConcreteDecorator���Ǿ����װ�ζ���֮�����𵽸�Component���ְ��Ĺ���
class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(const std::shared_ptr<Component> &component) : Decorator(component) {}

    virtual ~ConcreteDecoratorB() {
        std::cout << "~ConcreteDecoratorB destructure" << "\n";
    }

    void Operation() override {
        this->component->Operation();
        // ����ְ��A
        this->AddBehaviorB();
    }

    void AddBehaviorB() {
        std::cout << "����ְ��B��ConcreteDecoratorB::AddBehaviorB" << "\n";
    }
};
