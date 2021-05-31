#pragma once

#include "IProduct.h"

class IFactory {
public:
    virtual ~IFactory() {}

    virtual void registerProduct(std::shared_ptr <IProduct>) = 0;

    virtual std::shared_ptr <IProduct> createProduct(const std::string &owner) = 0;

    virtual std::shared_ptr <IProduct> create(const std::string &owner) {
        std::shared_ptr <IProduct> pro = createProduct(owner);
        registerProduct(pro);
        return pro;
    }

    virtual void printAllInfo() = 0;
};