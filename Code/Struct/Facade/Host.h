#pragma once

#include "Control.h"

//子控件， 主机
class Host : public Control {
public:
    void Start() override {
        std::cout << "Host start!" << "\n";
    }

    void ShutDown() override {
        std::cout << "Host shutdown!" << "\n";
    }
};