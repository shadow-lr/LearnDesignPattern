#pragma once

#include "GameValue.h"

class Memento {
public:
    Memento() {}

    Memento(const GameValue &value) : m_gameValue(value) {}

    GameValue GetValue() {
        return this->m_gameValue;
    }

private:
    GameValue m_gameValue;
};
