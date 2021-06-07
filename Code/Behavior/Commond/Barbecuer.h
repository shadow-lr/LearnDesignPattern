#pragma once

#include "Person.h"
#include <iostream>

// 烤肉师傅类，只负责烤串工作
class Barbecuer : public Person {
public:
    void Action() override {
        BackMutton();
        BaskChickenWing();
    }

    void BackMutton() {
        std::cout << "Bake mutton" << "\n";
    }

    void BaskChickenWing() {
        std::cout << "Bake chickenWing" << "\n";
    }

    virtual ~Barbecuer() {}
};