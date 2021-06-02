#pragma once

class Subject {
public:
    virtual ~Subject() {}

    virtual void Request() = 0;
};
