#pragma once

#include "RequestLevel.h"
#include <iostream>

// 抽象处理者（Handle）角色，提供职责链的统一接口
class Leader {
public:
    Leader(Leader *leader) : m_leader(leader) {}

    virtual ~Leader() {}

    virtual void HandleRequest(RequestLevel level) = 0;

protected:
    Leader *m_leader;
};