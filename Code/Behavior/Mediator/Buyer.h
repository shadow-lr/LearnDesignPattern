#pragma once

#include "Person.h"

class Buyer : public Person {
public:
    ~Buyer() {}

    void SendMessage(const std::string &msg) override {
        this->mediator->Send(msg, *this);
    }

    void GetMessage(const std::string &msg) override {
        std::cout << "Buyer recv : " << msg << "\n";
    }
};