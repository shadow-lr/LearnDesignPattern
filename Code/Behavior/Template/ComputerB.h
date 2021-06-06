#pragma once

#include "Computer.h"

class ComputerB : public Computer {
public:
    ~ComputerB() {}

protected:
    void installCpu() override {
        std::cout << "ComputerB install Inter Core i9" << "\n";
    }

    void installRam() override {
        std::cout << "ComputerB install 32G Ram" << "\n";
    }

    void installGraphicsCard() override {
        std::cout << "ComputerB install Gtx3090 GraphicsCard" << "\n";
    }

};
