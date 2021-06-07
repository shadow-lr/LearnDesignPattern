#pragma once

#include "Leader.h"

//具体处理者（Concrete Handler）角色
class Director : public Leader {//链扣3
public:
    Director(Leader *leader) : Leader(leader) {}

    ~Director() {}

    void HandleRequest(RequestLevel level) override {
        std::cout << "Director handle success!" << "\n";
    }

};