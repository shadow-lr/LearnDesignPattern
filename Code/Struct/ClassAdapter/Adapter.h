#pragma once

#include "Target.h"
#include "Adaptee.h"

// 类模式，适配器类，通过public继承获得接口继承的效果，通过private继承获得实现继承的效果
class Adapter : public Target, private Adaptee {
public:
    Adapter() {}

    ~Adapter() {}

    virtual void Request() {}    //实现Target定义的接口
};