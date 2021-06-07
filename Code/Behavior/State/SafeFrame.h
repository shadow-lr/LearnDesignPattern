#pragma once

#include "IState.h"
#include "IContext.h"
#include "DayState.h"

class SafeFrame : public IContext {
public:
    ~SafeFrame() {}

    SafeFrame() : m_state(&DayState::GetInstance()) {}

    void DoAction(ActionType actionType) override {
        switch (actionType) {
            case ActionType::Alarm:
                m_state->DoAlarm(this);
                break;
            case ActionType::Phone:
                m_state->DoAlarm(this);
                break;
            case ActionType::Use:
            default:
                m_state->DoAlarm(this);
                break;
        }
    }

    void SetClock(int hour) override {
        std::cout << "now timw is " << hour << std::endl;
        m_state->DoClock(this, hour);
    }

    // 这个函数是策略模式和状态模式的区别，策略模式是以类作为一种策略在构造的时候进行指向，不像状态模式一样通过内部的形式转变"状态"
    void StateChange(IState *state) override {
        std::cout << __FUNCTION__ << std::endl;
        m_state = state;
    }

    void CallSecurityCenter(const std::string &msg) override {
        std::cout << __FUNCTION__ << " " << msg << std::endl;
    }

    void RecoderLog(const std::string &msg) override {
        std::cout << __FUNCTION__ << " " << msg << std::endl;
    }

private:
    IState *m_state;
};


