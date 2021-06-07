#pragma once

#include "ConcreteElement.h"
#include <list>

class Employees {
private:
    std::list<Employee *> employees;
public:
    void Attach(Employee *employee) {
        employees.push_back(employee);
    }

    void Detach(Employee *employee) {
        employees.remove(employee);
    }

    void Accept(Visitor *visitor) {
        for (auto it = employees.begin(); it != employees.end(); ++it) {
            (*it)->Accept(visitor);
        }
    }
};