#pragma once

#include <iostream>
#include <vector>

class Context {
public:
    Context(const std::string &text) {
        std::string delim = " ";
        std::string item;
        std::stringstream ss(text);
        while (getline(ss, item, delim)) {
            this->tokens.push_back(item);
        }
        NextToken();
    }

    std::string NextToken() {
        if (index < tokens.size() - 1) {
            currentToken = tokens[++index];
        } else {
            currentToken = nullptr;
        }
        return currentToken;
    }

    int GetCurrentNumber(){
        int number = 0;
        try {
            number = std::atoi(currentToken.c_str());
        }
        catch(std::exception ex) {
            std::cout << "错误提示：" <<  ex.Message;
        }

        return number;
    }

    // 返回当前的标记
    std::string GetCurrentToken() {
        return currentToken;
    }

    // 跳过一个标记
    std::string SkipToken(std::string token) {
        if (token.compare(currentToken) != 0) {
            std::cout << "错误提示：" << currentToken << "解释错误!" << "n";
        }
    }

private:
    int index = -1;
    std::vector<std::string> tokens;
    std::string currentToken;
};