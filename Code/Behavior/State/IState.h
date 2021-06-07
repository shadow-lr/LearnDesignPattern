#pragma once

#include "IContext.h"

class IContext;

class IState {
public:
    virtual ~IState() {}

    virtual void DoClock(IContext *ctx, int hour) = 0;

    virtual void DoUse(IContext *ctx) = 0;

    virtual void DoAlarm(IContext *ctx) = 0;

    virtual void DoPhone(IContext *ctx) = 0;
};