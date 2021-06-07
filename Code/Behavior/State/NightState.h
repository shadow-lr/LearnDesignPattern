#pragma once

#include "IState.h"
#include "DayState.h"



class NightState : public IState {
public:
    static NightState &GetInstance() {
        static NightState s;
        return s;
    }

    virtual void DoClock(IContext *ctx, int hour) override;

    virtual void DoUse(IContext *ctx) override {
        ctx->CallSecurityCenter("Night use");
    }

    virtual void DoAlarm(IContext *ctx) override {
        ctx->CallSecurityCenter("Night alarm");
    }

    virtual void DoPhone(IContext *ctx) override {
        ctx->RecoderLog("Night phone");
    }

    NightState(const NightState &) = delete;

    NightState(NightState &&) = delete;

    NightState &operator=(const NightState &) = delete;

    NightState &operator=(const NightState &&) = delete;

protected:
    NightState() {}
};