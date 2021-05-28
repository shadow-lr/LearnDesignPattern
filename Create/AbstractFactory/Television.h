#pragma once

#include "IItem.h"

class Television : public IItem {
public:
    ~Television() {}

    Television(const std::string &name, float value, float period_of_use)
            : IItem(name), m_value(value), m_period_of_use(period_of_use) {}

protected:
    float m_value;
    float m_period_of_use;
};
