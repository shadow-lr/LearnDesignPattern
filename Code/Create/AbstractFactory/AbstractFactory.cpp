#include <iostream>
#include <vector>
#include <unordered_map>
#include <memory>
#include <assert.h>

#include "IFactory.h"

// CreateProcess error=193, %1 不是有效的 Win32 应用程序。

int main() {
    std::shared_ptr<IFactory> factory(IFactoryHelper::getFactory("ListFactory"));
    assert(factory != nullptr);

    std::shared_ptr<IDCard> idcard1 = factory->createIDCard("校园卡", 10);
    std::shared_ptr<IDCard> idcard2 = factory->createIDCard("乘车卡", 50);

    std::cout << "run code : AbstractFactory" << "\n";
    idcard1->makeIntroduce();
    idcard2->makeIntroduce();

    std::shared_ptr<Television> tv1 = factory->createTelevision("三星电视", 5000, 8);
    std::shared_ptr<Television> tv2 = factory->createTelevision("创维电视", 1749, 10);

    tv1->makeIntroduce();
    tv2->makeIntroduce();
}