#include <iostream>
#include <vector>
#include <unordered_map>
#include <memory>
#include <assert.h>

#include "IFactory.h"


int main() {
    std::shared_ptr<IFactory> factory(IFactoryHelper::getFactory("ListFactory"));
    assert(factory != nullptr);

    std::shared_ptr<IDCard> idcard1 = factory->createIDCard("校园卡", 10);
    std::shared_ptr<IDCard> idcard2 = factory->createIDCard("乘车卡", 50);

    std::shared_ptr<Television> tv1 = factory->createTelevision("三星电视", 5000, 8);
    std::shared_ptr<Television> tv2 = factory->createTelevision("创维电视", 1749, 10);

}