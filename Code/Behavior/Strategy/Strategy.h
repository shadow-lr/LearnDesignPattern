#pragma once

#include <iostream>

class Strategy {
public:
    virtual ~Strategy() {}

    Strategy() {}

    virtual void AlgorithmInterface() = 0;
};
