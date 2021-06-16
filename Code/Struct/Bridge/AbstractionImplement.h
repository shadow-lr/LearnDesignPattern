#pragma once

#include <iostream>

// 抽象基类
class AbstractionImplement {
public:
    // 定义操作接口
    virtual void Operation() = 0;

    virtual ~AbstractionImplement() {}

protected:
    AbstractionImplement() {}
};

class ConcreteAbstractionImplementA : public AbstractionImplement {
public:
    ConcreteAbstractionImplementA() {}

    void Operation() override {
        std::cout << "ConcreteAbstractionImplementA Operation" << std::endl;
    }

    ~ConcreteAbstractionImplementA() {}
};

class ConcreteAbstractionImplementB : public AbstractionImplement {
public:
    ConcreteAbstractionImplementB() {}

    ~ConcreteAbstractionImplementB() {}

    void Operation() override {
        std::cout << "ConcreteAbstractionImplementB Operation" << std::endl;
    }
};