#pragma once

// 目标接口类，客户需要的接口
class Target {
public:
    Target() {}

    virtual ~Target() {}

    virtual void Request(); // 定义标准接口
};