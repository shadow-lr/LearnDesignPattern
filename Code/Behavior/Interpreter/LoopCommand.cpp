#include "LoopCommand.h"

void LoopCommand::Interpret(Context *context) {
    context->SkipToken("LOOP");
    this->number = context->GetCurrentNumber();
    context->NextToken();
    // 循环语句中的表达式
    this->commandNode = new ExpressionNode();
    this->commandNode->Interpret(context);
}

void LoopCommand::Execute() {
    for (int i = 0; i < number; ++i) {
        std::cout << "loop command execute!!" << "\n";
        this->commandNode->Execute();
    }
}