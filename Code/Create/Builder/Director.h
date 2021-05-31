#pragma once

#include "ITeacherBuilder.h"

// 定义一个稳定的Director类，由它根据具体的老师构建器决定构建哪一个老师
class Director {
public:
    Director(std::shared_ptr<TeacherAbstractBuilder> builder) {
        this->builder = builder;
    }

    ~Director() {}

    void Create() {
        this->builder->BuildFirstSkill();
        this->builder->BuildFirstSkill();
    }

private:
    std::shared_ptr<TeacherAbstractBuilder> builder;
};

5