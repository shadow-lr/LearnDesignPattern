#pragma once

#include <string>
#include "Television.h"

class ListTelevision : public Television {
public:
    using Television::Television;
    std::string makeIntroduce() override;

public:
};

std::string ListTelevision::makeIntroduce() {
    return "You can watch movies on TV";
}
