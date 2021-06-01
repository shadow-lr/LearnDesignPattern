#pragma once

#include "Target.h"
#include <memory>

// 需要适配的类
class Adaptee {
public:
    Adaptee() {}

    virtual ~Adaptee() {}

    void SpecificRequest();
};


// 类模式，适配器类，通过public继承获得接口继承的效果，通过private继承获得实现继承的效果
class Adapter : public Target, private Adaptee {
public:
    Adapter() {}

    ~Adapter() {}

    virtual void Request();    //实现Target定义的接口
};

// 对象模式，适配器类，继承Target类，采用组合的方式实现Adaptee的复用
class Adapter1 : public Target {
public:
    Adapter1() {}

    Adapter1(std::shared_ptr<Adaptee> _adaptee) : adaptee(_adaptee) {}

    virtual ~Adapter1() {}

    virtual void Request(); // 实现Target定义的Request接口
private:
    std::shared_ptr<Adaptee> adaptee;
};

void Adaptee::SpecificRequest() {
    std::cout << "Adaptee::SpecificRequest()" << "\n";
}

void Adapter::Request() {
    std::cout << "Adapter::Request()" << "\n";
    this->SpecificRequest();
    std::cout << "----------------------------" << "\n";
}

void Adapter1::Request() {
    std::cout << "Adapter1::Request()" << "\n";
    this->adaptee->SpecificRequest();
    std::cout << "----------------------------" << "\n";
}