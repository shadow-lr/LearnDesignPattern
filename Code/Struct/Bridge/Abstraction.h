#pragma once

#include "AbstractionImplement.h"

#include <iostream>

class AbstractionImplement;

class Abstraction {
public:
    // 定义接口
    virtual void Operation() = 0;

    virtual ~Abstraction() {}

protected:
    Abstraction() {}
};

class RefinedAbstractionA : public Abstraction {
public:
    // 构造函数
    RefinedAbstractionA(AbstractionImplement *_imp) : imp(_imp) {}

    // 实现接口
    virtual void Operation() {
        std::cout << "RefinedAbstractionA::Operation" << std::endl;
        this->imp->Operation();
    }

    virtual ~RefinedAbstractionA() {
        delete imp;
        imp = nullptr;
    }

private:
    AbstractionImplement *imp;
};

class RefinedAbstractionB : public Abstraction {
public:
    RefinedAbstractionB(AbstractionImplement *_imp) : imp(_imp) {}

    virtual void Operation() {
        std::cout << "RefinedAbstractionB::Operation" << std::endl;
        imp->Operation();
    }

    virtual ~RefinedAbstractionB() {
        delete imp;
        imp = nullptr;
    }

private:
    AbstractionImplement *imp;
};