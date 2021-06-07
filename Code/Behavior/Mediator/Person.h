#pragma once

#include "Mediator.h"
#include <iostream>

class Person {
public:
    Person() {}

    virtual void SetMediator(Mediator &_mediator) {
        this->mediator = &_mediator;
    }

    virtual void SendMessage(const std::string &msg) = 0;

    virtual void GetMessage(const std::string &msg) = 0;

    virtual ~Person() {}

protected:
    Mediator *mediator;
};