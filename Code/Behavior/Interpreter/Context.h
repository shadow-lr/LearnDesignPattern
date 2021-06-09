#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <exception>

class Context {
public:
    Context(const std::string &text);

    void NextToken();

    // 如果当前的标记是一个数字，则返回对应的数值
    int GetCurrentNumber();

    // 返回当前的标记
    std::string GetCurrentToken();

    // 跳过一个标记
    void SkipToken(std::string token);

private:
    int index = -1;
    std::vector<std::string> tokens;
    std::string currentToken;
};