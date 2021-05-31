#pragma once
#include <string>

class IItem {
public:
    virtual ~IItem() {}

    IItem(const std::string &name) : m_name(name) {}

    virtual std::string makeIntroduce() = 0;

protected:
    std::string m_name;
};
