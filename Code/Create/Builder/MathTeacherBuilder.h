#pragma once

#include "Teacher.h"
#include "ITeacherBuilder.h"

class MathTeacherBuilder : public TeacherAbstractBuilder {
public:
    MathTeacherBuilder() {
        teacher = std::make_shared<Teacher>();
    }

    ~MathTeacherBuilder() {
        if (teacher) {
            teacher.reset();
            teacher = nullptr;
        }
    }

    void BuildFirstSkill() override {
        std::cout << "Math Teacher build first skill finish" << "\n";
        this->teacher->SetFirstSkill("math");
    }

    void BuildSecondSkill() override {
        std::cout << "Math Teacher build second skill finish" << "\n";
        this->teacher->SetSecondSkill("english");
    }

    std::shared_ptr<Teacher> GetTeacher() override {
        return this->teacher;
    }

    void PrintSkillList() override {
        std::cout << "===========Math Teacher===========\n";
        std::cout << "First  : " << this->teacher->GetFirstSkill() << "\n";
        std::cout << "Second : " << this->teacher->GetSecondSkill() << "\n";
        std::cout << "==================================\n";
    }

private:
    std::shared_ptr<Teacher> teacher;
};