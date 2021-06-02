#pragma once

#include "Memento.h"

// Caretake类
class Caretake {
public:
    // 保存信息
    void Save(const Memento &memento) {
        this->m_memento = memento;
    }

    // 读已保存的信息
    Memento Load() {
        return this->m_memento;
    }

private:
    Memento m_memento;
};