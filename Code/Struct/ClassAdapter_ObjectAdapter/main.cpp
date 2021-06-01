#include <iostream>
#include "Adapter.h"

int main() {

    // 类模式Adapter
    std::shared_ptr<Target> pTarget = std::make_shared<Adapter>();
    pTarget->Request();

    // 对象模式Adapter1
    std::shared_ptr<Adaptee> ade = std::make_shared<Adaptee>();
    std::shared_ptr<Target> pTarget1 = std::make_shared<Adapter1>(ade);
    pTarget1->Request();

    // 对象模式Adapter2
    std::shared_ptr<Target> pTarget2 = std::make_shared<Adapter1>();
    pTarget2->Request();

}