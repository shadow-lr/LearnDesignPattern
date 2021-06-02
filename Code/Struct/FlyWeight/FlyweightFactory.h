#pragma once

#include "Flyweight.h"
#include <unordered_map>
#include <memory>

class FlyweightFactory {
public:
    std::shared_ptr<Flyweight> GetFlyweight(std::string name) {
        if (_flys.find(name) == _flys.end()) {
            _flys[name] = std::make_shared<Flyweight>(name);
        }

        return _flys[name];
    }

private:
    std::unordered_map<std::string, std::shared_ptr<Flyweight>> _flys;
};