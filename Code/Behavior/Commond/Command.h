#pragma once

#include "Barbecuer.h"

// 抽象命令类：是执行具体操作的接口
class Command {
public:
    Command() {}

    Command(Person *receiver) : p_receiver(receiver) {}

    virtual ~Command() {}

    virtual void ExecuteCommand() = 0; // 执行命令
protected:
    Person *p_receiver;
};