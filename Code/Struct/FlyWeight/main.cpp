#include "Flyweight.h"
#include "ConcreteFlyweight.h"
#include "FlyweightFactory.h"
#include <iostream>
#include <memory>

// 享元模式
int main() {
    {
        std::shared_ptr<FlyweightFactory> fc = std::make_shared<FlyweightFactory>();
        std::shared_ptr<Flyweight> fw1 = fc->GetFlyweight("hello");
        std::shared_ptr<Flyweight> fw2 = fc->GetFlyweight("world");
        std::shared_ptr<Flyweight> fw3 = fc->GetFlyweight("hello");
    }
}