#pragma once

#include "Element.h"
#include <iostream>

class Employee : public Element {
public:
    Employee(const std::string& _name, double _income, int _vacationDays) :
            name(_name), income(_income), vacationDays(_vacationDays) {}

//    Employee(Employee *pEmployee) {}

    void Accept(Visitor *visitor) override {
        visitor->Visit(this);
    }

public:
    std::string name;
    double income;
    int vacationDays;
};

// 收入访问者
class IncomeVisitor : public Visitor {
public:
    void Visit(Element *element) {
        Employee *employee = ((Employee *) element);
        employee->income *= 1.10;
        std::cout << employee->name << "'s new income: " << employee->income << "\n";
    }
};

class VacationVisitor : public Visitor {
public:
    void Visit(Element *element) {
        Employee *employee = ((Employee *) element);
        employee->vacationDays += 3;
        std::cout << employee->name << "'s new vacation days: " << employee->vacationDays << "\n";
    }
};
