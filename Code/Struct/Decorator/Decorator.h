#pragma once

#include "Component.h"

//Decorator：装饰抽象类，继承自Component
class Decorator : public Component {
public:
    Decorator(const std::shared_ptr<Component> &_component) : component(_component) {}

    virtual ~Decorator() {
        std::cout << "~Decorator destructure" << "\n";
        component.reset();
        component = nullptr;
    }

    void SetComponent(std::shared_ptr<Component> _component) {
        component = _component;
    }

    virtual void Operation() override {};
protected:
    std::shared_ptr<Component> component;
};
