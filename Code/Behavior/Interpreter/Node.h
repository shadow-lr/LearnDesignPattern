#pragma once

#include "Context.h"

// 抽象节点类
class Node {
public:
    virtual ~Node() {}

    // 声明一个方法用于解释语句
    virtual void Interpret(Context *context) {}

    // 声明一个方法用于执行标记对应的命令
    virtual void Execute() = 0;
};