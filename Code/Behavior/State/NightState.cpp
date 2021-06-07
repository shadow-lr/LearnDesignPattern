#include "NightState.h"
#include "DayState.h"

void NightState::DoClock(IContext *ctx, int hour) {
    if (9 <= hour || hour < 17) {
        ctx->StateChange(&DayState::GetInstance());
    }
}