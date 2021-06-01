#pragma once

#include "Control.h"

class Peripheral : public Control {
public:
    void Start() override{
        std::cout << "Peripheral start!" << "\n";
    }

    void ShutDown() override{
        std::cout << "Peripheral shutdown!" << "\n";
    }
};

