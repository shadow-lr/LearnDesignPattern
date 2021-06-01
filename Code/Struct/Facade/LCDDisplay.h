#pragma once

#include "Control.h"

//子控件， 显示屏
class LCDDisplay : public Control {
public:
    void Start() override {
        std::cout << "LCDDisplay start!" << "\n";
    }

    void ShutDown() override {
        std::cout << "LCDDisplay shutdown!" << "\n";
    }
};