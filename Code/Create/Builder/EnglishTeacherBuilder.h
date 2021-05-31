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
        this->teacher->SetFirstSkill("english");
    }

    void BuildSecondSkill() override {
        this->teacher->SetSecondSkill("math");
    }

    std::shared_ptr<Teacher> GetTeacher() override {
        return this->teacher;
    }

private:
    std::shared_ptr<Teacher> teacher;
};