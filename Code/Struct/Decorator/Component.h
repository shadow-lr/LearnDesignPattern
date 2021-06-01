#pragma once

#include <iostream>
#include <memory>

// Component抽象类，定义该对象的接口
class Component {
public:
    virtual ~Component() {}

    virtual void Operation() = 0;

protected:
    Component() {}
};