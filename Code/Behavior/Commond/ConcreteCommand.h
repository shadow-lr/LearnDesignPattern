#pragma once

#include "Command.h"
#include "Barbecuer.h"
#include <memory>

// 具体命令类：烤羊肉串命令
class BackMuttonCommand : public Command {
public:
    BackMuttonCommand(Person *receiver) {
        p_receiver = receiver;
    }

    void ExecuteCommand() override {
        Barbecuer *it = ((Barbecuer *) p_receiver);
        it->BackMutton();
    }
};

// 具体命令类：烤鸡翅串命令
class BackChickenWingCommand : public Command {
public:
    BackChickenWingCommand(Person *receiver) {
        p_receiver = receiver;
    }

    void ExecuteCommand() override {
        Barbecuer *it = ((Barbecuer *) p_receiver);
        it->BaskChickenWing();
    }
};