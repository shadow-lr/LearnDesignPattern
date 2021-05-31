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
        this->teacher->SetFirstSkill("math");
    }

    void BuildSecondSkill() override {
        this->teacher->SetSecondSkill("english");
    }

    std::shared_ptr<Teacher> GetTeacher() override {
        return this->teacher;
    }

private:
    std::shared_ptr<Teacher> teacher;
};