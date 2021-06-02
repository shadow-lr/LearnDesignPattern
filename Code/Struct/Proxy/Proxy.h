#pragma once

#include "ConcreteSubject.h"
#include "Subject.h"

#include <iostream>
#include <memory>

// 定义代理类
class Proxy : public Subject {
public:
    Proxy() : _subject(nullptr) {}

    Proxy(const std::shared_ptr<Subject> &subject) : _subject(subject) {}

    ~Proxy() {}

    void SetSubject(const std::shared_ptr<Subject> &subject) {
        _subject = subject;
    }

    void DoSomething1() {
        std::cout << "Proxy::DoSomething1" << "\n";
    }

    void DoSomething2() {
        std::cout << "Proxy::DoSomething2" << "\n";
    }

    virtual void Request() {
        if (this->_subject == nullptr) {
            this->_subject = std::make_shared<ConcreteSubject>();
        }

        this->DoSomething1();       // 表示额外附加的操作
        this->_subject->Request();  // 代理的实体类操作
        this->DoSomething2();       // 表示额外附加的操作
    }

private:
    std::shared_ptr<Subject> _subject;
};