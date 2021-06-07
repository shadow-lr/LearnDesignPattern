#include "IContext.h"
#include "SafeFrame.h"
#include "NightState.h"
#include "DayState.h"

// 时钟上的每个时刻都有不同的状态
int main() {
    IContext *ctx = new SafeFrame();
    for (int i = 0; i < 24; ++i) {
        ctx->SetClock(i);
        ctx->DoAction(IContext::ActionType::Use);
        ctx->DoAction(IContext::ActionType::Phone);
        ctx->DoAction(IContext::ActionType::Alarm);
    }

    delete ctx;
    ctx = nullptr;
}