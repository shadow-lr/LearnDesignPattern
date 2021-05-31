#pragma once

#include <string>
#include "IDCard.h"

class ListIDCard : public IDCard {
public:
    // 沿用父类构造函数
    using IDCard::IDCard;
    std::string makeIntroduce() override;
};

std::string ListIDCard::makeIntroduce() {
    return "The full name of IDCard is Identification Card\n";
}