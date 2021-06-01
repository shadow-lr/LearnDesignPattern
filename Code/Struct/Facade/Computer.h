#pragma once

#include "Host.h"
#include "LCDDisplay.h"
#include "Peripheral.h"

// 电脑类, Computer类只需要Start和ShutDown ，而不需要为Computer类指定特定的Host、LCDDisplay、Peripheral
class Computer {
public:
    void Start() {
        m_Host.Start();
        m_LCDDisplay.Start();
        m_Peripheral.Start();
    }

    void ShutDown() {
        m_Host.ShutDown();
        m_LCDDisplay.ShutDown();
        m_Peripheral.ShutDown();
    }

private:
    Host m_Host;
    LCDDisplay m_LCDDisplay;
    Peripheral m_Peripheral;
};