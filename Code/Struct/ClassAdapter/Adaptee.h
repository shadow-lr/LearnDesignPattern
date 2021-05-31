#pragma once

// 需要适配的类
class Adaptee {
public:
    Adaptee() {}

    virtual ~Adaptee() {}

    void SpecificRequest();
};