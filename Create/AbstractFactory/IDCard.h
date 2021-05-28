#pragma once

#include "IItem.h"

class IDCard : public IItem {
public:
    ~IDCard() {}

    IDCard(const std::string &name, float value) : IItem(name), m_value(value) {}

protected:
    float m_value;
};