#pragma once

// 抽象节点类
class Node{
public:
    virtual void Interpret(Context* text){}  // 声明一个方法用于解释语句
    virtual void Execute() = 0;     // 声明一个方法用于执行标记对应的命令
};