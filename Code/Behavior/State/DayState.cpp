#include "DayState.h"
#include "NightState.h"

void DayState::DoClock(IContext *ctx, int hour) {
    if (hour < 9 || 17 <= hour) {
        ctx->StateChange(&NightState::GetInstance());
    }
}