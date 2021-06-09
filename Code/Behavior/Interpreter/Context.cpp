#include "Context.h"

Context::Context(const std::string &text) {
    char delim = ' ';
    std::string item;
    std::stringstream ss(text);
    while (std::getline(ss, item, delim)) {
        this->tokens.push_back(item);
    }
    NextToken();
}

void Context::NextToken() {
    if (this->index < (int) tokens.size() - 1) {
        currentToken = tokens[++this->index];
    } else {
        currentToken = nullptr;
    }
}

int Context::GetCurrentNumber() {
    int number = 0;
    try {
        number = std::atoi(currentToken.c_str());
        std::cout << "number : " << number << "\n";
    }
    catch (std::exception e) {
        std::cout << "错误提示：" << e.what();
    }

    return number;
}

// 返回当前的标记
std::string Context::GetCurrentToken() {
    return currentToken;
}

// 跳过一个标记
void Context::SkipToken(std::string token) {
    if (token.compare(currentToken) != 0) {
        std::cout << "current Token : " << currentToken << "\n";
        std::cout << "错误提示：" << currentToken << "解释错误!" << "\n";
    }
    NextToken();
}