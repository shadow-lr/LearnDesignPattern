#pragma once

#include "ConcreteComponent.h"
#include "Decorator.h"

// ConcreteDecorator���Ǿ����װ�ζ���֮�����𵽸�Component���ְ��Ĺ���
class ConcreteDecoratorC : public Decorator {
public:
    ConcreteDecoratorC(const std::shared_ptr<Component> &component) : Decorator(component) {}

    virtual ~ConcreteDecoratorC() {
        std::cout << "~ConcreteDecoratorC destructure" << "\n";
    }

    void Operation() override {
        this->component->Operation();
        // ����ְ��A
        this->AddBehaviorC();
    }

    void AddBehaviorC() {
        std::cout << "����ְ��C��ConcreteDecoratorC::AddBehaviorC" << "\n";
    }
};
