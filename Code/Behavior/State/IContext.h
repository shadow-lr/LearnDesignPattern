#pragma once

#include "IState.h"
#include <iostream>

class IState;

class IContext {
public:
    enum class ActionType {
        Use,
        Alarm,
        Phone
    };

    virtual ~IContext() {}

    virtual void DoAction(ActionType actionType) = 0;

    virtual void SetClock(int hour) = 0;

    virtual void StateChange(IState *state) = 0;

    virtual void CallSecurityCenter(const std::string &msg) = 0;

    virtual void RecoderLog(const std::string &msg) = 0;
};