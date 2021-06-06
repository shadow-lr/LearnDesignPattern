#pragma once

#include "Computer.h"

class ComputerA : public Computer {
public:
    ~ComputerA() {}

protected:
    void installCpu() override {
        std::cout << "ComputerA install Inter Core i5" << "\n";
    }

    void installRam() override {
        std::cout << "ComputerA install 26 Ram" << "\n";
    }

    void installGraphicsCard() override {
        std::cout << "ComputerA install Gtx1660 GraphicsCard" << "\n";
    }

};
