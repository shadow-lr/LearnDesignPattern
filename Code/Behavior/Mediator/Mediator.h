#pragma once

#include <iostream>
#include "Person.h"
class Person;

// 中介抽象类
class Mediator {
public:
    virtual ~Mediator() {}

    virtual void Send(const std::string &msg, Person &man) = 0;

    virtual void SetBuyer(Person &_buyer) = 0;

    virtual void SetSeller(Person &_seller) = 0;
};
