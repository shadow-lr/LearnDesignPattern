#include "ExpressionNode.h"


void ExpressionNode::Interpret(Context *context) {
    // 循环处理Context中的标记
    while (true) {
        std::cout << "156" << "\n";
        // 如果已经没有任何标记，则退出解释
        if (context->GetCurrentToken().empty()) {
            std::cout << "break;" << "\n";
            break;
        }
            // 如果标记为END，则不解释END并结束本次解释过程，可以继续之后的解释
        else if (context->GetCurrentToken().compare("END") == 0) {
            std::cout << "end;" << "\n";
            context->SkipToken("END");
            break;
        }
            // 如果为其它标记，则解释标记并加入命令集合
        else {
            std::cout << "node;" << "\n";
            Node *node = new CommandNode();
            node->Interpret(context);
            nodeList.push_back(node);
        }
    }
}

void ExpressionNode::Execute() {
    for (auto node : nodeList) {
        node->Execute();
    }
}