#pragma once

class ListTelevision : public Television {
public:
    std::string makeIntroduce() override;

public:
};

std::string ListTelevision::makeIntroduce() {
    return "You can watch movies on TV";
}
