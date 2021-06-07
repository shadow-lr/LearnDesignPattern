#pragma once

#include "Command.h"
#include <vector>

class Waiter {
public:
    void SetOrder(Command *command) {
        p_commandList.emplace_back(command);
        std::cout << "���ӿ�������" << "\n";
    }

    void Notify() {
        for (auto it = p_commandList.begin(); it != p_commandList.end(); ++it) {
            (*it)->ExecuteCommand();
        }
    }

private:
    std::vector<Command *> p_commandList;    //����������
};