#pragma once

#include "IFactory.h"
#include "ListIDCard.h"
#include "ListTelevision.h"

class ListFactory : public IFactory {
public:
    ~ListFactory() {}

    std::shared_ptr<IDCard> createIDCard(const std::string &name, float value) override {
        return std::make_shared<ListIDCard>(name, value);
    }

    std::shared_ptr<Television> createTelevision(const std::string &name, float value, float period_of_use) override {
        return std::make_shared<ListTelevision>(name, value, period_of_use);
    }
};

static int ListFactoryInit = []() -> int {

};