#pragma once

#include "Node.h"
#include "ExpressionNode.h"

// 非终结符表达式：循环命令类
class LoopCommand : public Node {
public:
    ~LoopCommand() {}

    void Interpret(Context *context) override;

    void Execute() override;

private:
    int number; // 循环次数
    Node *commandNode;  // 循环语句中的表达式
};