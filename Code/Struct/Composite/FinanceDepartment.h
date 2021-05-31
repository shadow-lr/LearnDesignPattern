#pragma once

#include "Company.h"

class FinanceDepartment : public Company {
public:
    FinanceDepartment(const std::string &name) : Company(name) {}

    virtual ~FinanceDepartment() {}

    virtual void Show(int depth);
};

void FinanceDepartment::Show(int depth) {
    for (int i = 0; i < depth; ++i)
        std::cout << "-";
    std::cout << this->m_name << "\n";
}