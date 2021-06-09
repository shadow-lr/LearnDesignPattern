#pragma once

#include "Node.h"
#include "LoopCommand.h"
#include "PrimitiveCommand.h"

// 非终结符表达式：语句命令节点类
class CommandNode : public Node {
public:
    ~CommandNode() {}

    void Interpret(Context *context) override;

    void Execute() override;

private:
    Node *node;
};