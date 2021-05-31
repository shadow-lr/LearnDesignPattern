#pragma once

#include <iostream>
#include <vector>
#include <memory>

class IProduct {
public:
    virtual ~IProduct() {}

    virtual void use() = 0;

    virtual void print() = 0;
};