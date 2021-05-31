#pragma once

#include <iostream>
#include <string>
#include <memory>

// 定义建造类
class Teacher {
public:
    Teacher() {}

    void SetFirstSkill(const std::string &skill) {
        this->first_skill = skill;
    }

    void SetSecondSkill(const std::string &skill) {
        this->second_skill = skill;
    }

    std::string GetFirstSkill() {
        return this->first_skill;
    }

    std::string GetSecondSkill() {
        return this->second_skill;
    };

private:
    std::string first_skill;
    std::string second_skill;
};
