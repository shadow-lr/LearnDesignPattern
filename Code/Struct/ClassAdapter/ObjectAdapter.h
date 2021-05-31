#pragma once

#include "Target.h"
#include "Adaptee.h"
#include <memory>

// 对象模式，适配器类，继承Target类，采用组合的方式实现Adaptee的复用
class Adapter1 : public Target {
public:
    Adapter1() {}

    virtual ~Adapter1() {}

    virtual void Request(); // 实现Target定义的Request接口
private:
    std::shared_ptr<Adaptee> adaptee;
};