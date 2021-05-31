#pragma once

#include "Teacher.h"

// 定义一个文本的抽象构建器，再根据具体构建器继承出具体的XX构建器
class TeacherAbstractBuilder {
public:
    TeacherAbstractBuilder() {}

    virtual ~TeacherAbstractBuilder() {}

    virtual void BuildFirstSkill() = 0;

    virtual void BuildSecondSkill() = 0;

    virtual void PrintSkillList() = 0;

    virtual std::shared_ptr<Teacher> GetTeacher() = 0;
};