#pragma once

#include "Leader.h"

//具体处理者（Concrete Handler）角色
class Captain : public Leader { //链扣2
public:
    Captain(Leader *leader) : Leader(leader) {}

    ~Captain() {}

    void HandleRequest(RequestLevel level) override {
        if (level < Level_Three) {
            std::cout << "Captain handle failed because level request : " << Level_Three << "\n";
        } else {
            std::cout << "Captain handle success!" << "\n";
            m_leader->HandleRequest(level);
        }
    }

};
