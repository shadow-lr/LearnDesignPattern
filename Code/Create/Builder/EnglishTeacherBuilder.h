#pragma once

#include "ITeacherBuilder.h"

class EnglishTeacherBuilder : public TeacherAbstractBuilder {
public:
    EnglishTeacherBuilder() {
        teacher = std::make_shared<Teacher>();
    }

    ~EnglishTeacherBuilder() {
        if (teacher) {
            teacher.reset();
            teacher = nullptr;
        }
    }

    void BuildFirstSkill() override {
        std::cout << "English Teacher build first skill finish" << "\n";
        this->teacher->SetFirstSkill("english");
    }

    void BuildSecondSkill() override {
        std::cout << "English Teacher build second skill finish" << "\n";
        this->teacher->SetSecondSkill("math");
    }

    void PrintSkillList() override {
        std::cout << "===========English Teacher===========\n";
        std::cout << "First  : " << this->teacher->GetFirstSkill() << "\n";
        std::cout << "Second : " << this->teacher->GetSecondSkill() << "\n";
        std::cout << "=====================================\n";
    }

    std::shared_ptr<Teacher> GetTeacher() override {
        return this->teacher;
    }

private:
    std::shared_ptr<Teacher> teacher;
};