#pragma once

#include "Node.h"
#include "CommandNode.h"
#include <list>

// 非终结符表达式：表达式节点类
class ExpressionNode : public Node {
public:
    void Interpret(Context *context) override;

    void Execute() override;

private:
    std::list<Node *> nodeList;
};