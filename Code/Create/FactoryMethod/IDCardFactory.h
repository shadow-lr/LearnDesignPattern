#pragma once

#include "IFactory.h"

class IDCardFactory : public IFactory {
public:
    std::shared_ptr<IProduct> createProduct(const std::string &owner) override {
        return std::make_shared<IDCard>(owner);
    }

    void registerProduct(std::shared_ptr<IProduct> pro) override {
        m_productList.push_back(pro);
    }

    void printAllInfo() override {
        std::cout << "All IDCard Info : " << "\n";
        for (auto it = m_productList.begin(); it != m_productList.end(); ++it) {
            (*it)->print();
        }
    }

private:
    std::vector<std::shared_ptr<IProduct>> m_productList;
};
