#pragma once

#include <iostream>

// 目标接口类，客户需要的接口
class Target {
public:
    Target() {}

    virtual ~Target() {}

    // 定义标准接口
    virtual void Request() {
        std::cout << "Target::Request" << "\n";
    }
};