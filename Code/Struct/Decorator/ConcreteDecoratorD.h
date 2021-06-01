#pragma once

#include "ConcreteComponent.h"
#include "Decorator.h"

// ConcreteDecorator���Ǿ����װ�ζ���֮�ģ��𵽸�Component���ְ��Ĺ���
class ConcreteDecoratorD : public Decorator {
public:
    ConcreteDecoratorD(const std::shared_ptr<Component> &component) : Decorator(component) {}

    virtual ~ConcreteDecoratorD() {
        std::cout << "~ConcreteDecoratorD destructure" << "\n";
    }

    void Operation() override {
        this->component->Operation();
        // ����ְ��A
        this->AddBehaviorD();
    }

    void AddBehaviorD() {
        std::cout << "����ְ��D��ConcreteDecoratorD::AddBehaviorD" << "\n";
    }
};
