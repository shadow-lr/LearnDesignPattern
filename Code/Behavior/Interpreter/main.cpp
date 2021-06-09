#include "ExpressionNode.h"
#include "PrimitiveCommand.h"
#include "Context.h"
#include "LoopCommand.h"

int main() {
    std::string instruction = "LOOP 2 PRINT yangguo SPACE SPACE PRINT xiaolongnv BREAK END PRINT guojing SPACE SPACE PRINT huangrong";
    Context *context = new Context(instruction);
    std::cout << "1" << "\n";
    Node *node = new ExpressionNode();
    std::cout << "2" << "\n";
    node->Interpret(context);
    std::cout << "3" << "\n";

    std::cout << "源指令：" << instruction << "\n";
    std::cout << "解释后:" << "\n";

    node->Execute();

    delete context;
    context = nullptr;

    delete node;
    node = nullptr;
}
