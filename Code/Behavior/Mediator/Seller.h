#pragma once

#include "Person.h"

class Seller : public Person {
public:
    ~Seller() {}

    void SendMessage(const std::string &msg) override {
        this->mediator->Send(msg, *this);
    }

    void GetMessage(const std::string &msg) override {
        std::cout << "Seller recv : " << msg << "\n";
    }

};