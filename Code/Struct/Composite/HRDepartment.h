#pragma once

#include "Company.h"

class HRDepartment : public Company {
public:
    HRDepartment(std::string name) : Company(name) {}

    virtual ~HRDepartment() {}

    // 只需显示，无限添加函数，因为已是叶节点
    virtual void Show(int depth) {
        for (int i = 0; i < depth; ++i)
            std::cout << "-";
        std::cout << this->m_name << "\n";
    }
};