#pragma once

#include "Item.h"

class Book : public Item {
public:
    virtual ~Book() {}

    Book() : m_name(nullptr) {}

    Book(const std::string &name) : m_name(name) {}

    std::string GetName() { return this->m_name; }

private:
    std::string m_name;
};