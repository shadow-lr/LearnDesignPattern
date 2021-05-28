#pragma once

#include "IDCard.h"

class ListIDCard : public IDCard {
public:
    std::string makeIntroduce() override;
};

std::string ListIDCard::makeIntroduce() {
    return "The full name of IDCard is Identification Card\n";
}