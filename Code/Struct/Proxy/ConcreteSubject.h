#pragma once

#include "Subject.h"
#include <iostream>

class ConcreteSubject : public Subject {
public:
    ConcreteSubject(const std::string _name = "GGG") : name(_name) {}

    virtual ~ConcreteSubject() {}

    virtual void Request() {
        std::cout << "Proxy::DoSomething::" << this->name << "\n";
    }

private:
    std::string name;
};