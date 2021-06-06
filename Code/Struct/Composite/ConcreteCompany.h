#pragma once

#include "Company.h"
#include <list>

class ConcreteCompany : public Company {
public:
    ConcreteCompany(const std::string &name) : Company(name) {}

    virtual ~ConcreteCompany() {}

    void Add(std::shared_ptr<Company> pCom) override;

    void Remove(std::shared_ptr<Company> pCom) override;

    void Show(int depth) override;

private:
    std::list<std::shared_ptr<Company>> m_listCompany;
};

// 增加部门(组件)
void ConcreteCompany::Add(std::shared_ptr<Company> pCom) {
    m_listCompany.emplace_back(pCom);
}

// 移除部门(组件)
void ConcreteCompany::Remove(std::shared_ptr<Company> pCom) {
    for (auto it : m_listCompany) {
        if (it == pCom) {
            m_listCompany.remove(it);
            return;
        }
    }
}

// 展示部门(组件)
void ConcreteCompany::Show(int depth) {
    for (int i = 0; i < depth; ++i) {
        std::cout << "-";
    }

    std::cout << this->m_name << "\n";

    // 显示下层结点
    for (auto it = m_listCompany.begin(); it != m_listCompany.end(); ++it) {
        (*it)->Show(depth + 2);
    }
}