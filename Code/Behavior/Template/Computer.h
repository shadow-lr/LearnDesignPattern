#pragma once

#include <iostream>

class Computer {
public:
    virtual ~Computer() {}

    void product() {
        installCpu();
        installRam();
        installGraphicsCard();
    }

protected:
    virtual void installCpu() = 0;

    virtual void installRam() = 0;

    virtual void installGraphicsCard() = 0;
};