#pragma once

#include "Node.h"

class PrimitiveCommand : public Node {
public:
    ~PrimitiveCommand() {}

    void Interpret(Context *context) override {
        name = context->GetCurrentToken();
        context->SkipToken(name);

        if (name.compare("PRINT") != 0
            && name.compare("BREAK") != 0 && name.compare("SPACE") != 0) {
            std::cout << "·Ç·¨ÃüÁî!" << "\n";
        }

        if (name.compare("PRINT") == 0) {
            text = context->GetCurrentToken();
            context->NextToken();
        }
        std::cout << name << "\t" << "text : " << text << "\n";
    }

    void Execute() override {
        if (name.compare("PRINT") == 0) {
            std::cout << text << "\n";
        } else if (name.compare("SPACE") == 0) {
            std::cout << " ";
        } else if (name.compare("BREAK") == 0) {
            std::cout << "\r\n";
        }
    }

private:
    std::string name;
    std::string text;
};