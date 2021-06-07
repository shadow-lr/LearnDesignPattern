#pragma once

class Person {
public:
    virtual ~Person() {}

    virtual void Action() = 0;
};