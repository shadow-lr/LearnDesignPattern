#pragma once

#include "GameValue.h"
#include "Memento.h"

class Game {
public:
    Game(const GameValue &value) : m_gameValue(value) {}

    // 增加等级
    void AddGrade() {}

    // 更换武器
    void ReplaceArm(const std::string &arm) {
        this->m_gameValue.arm = arm;
    }

    // 更换工会
    void ReplaceCorps(const std::string &corps) {
        this->m_gameValue.corps = corps;
    }

    // 保存当前信息
    Memento SaveValue() {
        Memento memento(this->m_gameValue);
        return memento;
    }

    // 载入信息
    void Load(Memento memento) {
        m_gameValue = memento.GetValue();
    }

    void ShowValue() {
        std::cout << "Grade : " << m_gameValue.grade << "\n";
        std::cout << "Arm   : " << m_gameValue.arm << "\n";
        std::cout << "Corps : " << m_gameValue.corps << "\n";
    }

private:
    GameValue m_gameValue;
};