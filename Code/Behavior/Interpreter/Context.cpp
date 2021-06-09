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
        std::cout << "������ʾ��" << e.what();
    }

    return number;
}

// ���ص�ǰ�ı��
std::string Context::GetCurrentToken() {
    return currentToken;
}

// ����һ�����
void Context::SkipToken(std::string token) {
    if (token.compare(currentToken) != 0) {
        std::cout << "current Token : " << currentToken << "\n";
        std::cout << "������ʾ��" << currentToken << "���ʹ���!" << "\n";
    }
    NextToken();
}