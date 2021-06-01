#pragma once

#include "Component.h"

//ConcreteDecorator�������Component���󣬿��Ը��ö���̬ ���ְ��
class ConcreteComponent : public Component {
public:
    ConcreteComponent() {}

    virtual ~ConcreteComponent() {
        std::cout << "~ConcreteComponent" << "\n";
    }

    virtual void Operation() override {
        std::cout << "ԭְ��ConcreteComponent::Operation" << "\n";
    }
};