#pragma once

#include <iostream>

//抽象控件类，提供接口
class Control {
public:
    virtual void Start() = 0;

    virtual void ShutDown() = 0;
};