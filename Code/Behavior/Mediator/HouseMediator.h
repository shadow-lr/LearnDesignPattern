#pragma once

#include "Mediator.h"

class HouseMediator : public Mediator {
public:
    ~HouseMediator() {}

    void Send(const std::string &msg, Person &man) override {
        if (&man == this->buyer) {
            this->buyer->GetMessage(msg);
        } else if (&man == this->seller) {
            this->seller->GetMessage(msg);
        }
    }

    void SetBuyer(Person &_buyer) override {
        this->buyer = &_buyer;
    }

    void SetSeller(Person &_seller) override {
        this->seller = &_seller;
    }

protected:
    Person *buyer;
    Person *seller;
};
