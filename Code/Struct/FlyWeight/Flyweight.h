#pragma once

#include <iostream>


class Flyweight {
public:
    Flyweight(const std::string &_state) : state(_state) {}

    std::string GetState() const {
        return this->state;
    }

    virtual void Operation(const std::string &state) {}

    virtual ~Flyweight() {}

protected:
    std::string state;
};