#include "CommandNode.h"
#include "LoopCommand.h"

void CommandNode::Interpret(Context *context) {
    // 处理LOOP指令
    if (context->GetCurrentToken().compare("LOOP") == 0) {
        node = new LoopCommand();
        node->Interpret(context);
    }
        // 处理其他指令
    else {
        node = new PrimitiveCommand();
        node->Interpret(context);
    }
}

void CommandNode::Execute() {
    node->Execute();
}