#pragma once

#include "IProduct.h"

class IDCard : public IProduct {
public:
    void use() override {
        std::cout << "use IDCard with owner : " << m_ower << "\n";
    }

    IDCard(const std::string &owner) : m_ower(owner) {}

    void print() override {
        std::cout << "m_ower : " << m_ower << "\n";
    }

private:
    std::string m_ower;
    std::string m_id;
};