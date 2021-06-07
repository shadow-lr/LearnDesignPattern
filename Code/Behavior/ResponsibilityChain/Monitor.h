#pragma once

#include "Leader.h"

// 具体处理者（Concrete Handle）角色
class Monitor : public Leader { // 链扣1
public:
    Monitor(Leader *leader) : Leader(leader) {}

    ~Monitor() {}

    void HandleRequest(RequestLevel level) override {
        if (level < Level_Two) {
            std::cout << "Monitor handle failed because level request : " << Level_Two << "\n";
        } else {
            std::cout << "Monitor handle success!" << "\n";
            m_leader->HandleRequest(level);
        }
    }

};