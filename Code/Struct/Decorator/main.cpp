
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"
#include "ConcreteDecoratorC.h"
#include "ConcreteDecoratorD.h"
#include "Decorator.h"
#include "DecoratorOnlyOne.h"

int main() {
    // 要装饰的对象
    std::shared_ptr<Component> pCom = std::make_shared<ConcreteComponent>();
    std::shared_ptr<Decorator> pDec = nullptr;

    pDec = std::make_shared<ConcreteDecoratorA>(pCom);
    pDec = std::make_shared<ConcreteDecoratorB>(pDec);
    pDec = std::make_shared<ConcreteDecoratorC>(pDec);
    pDec = std::make_shared<ConcreteDecoratorD>(pDec);

    pDec->Operation();

    std::cout << "-----------------------------" << "\n";

    // 只添加一种修饰
    std::shared_ptr<Component> pCom1 = std::make_shared<ConcreteComponent>();
    std::shared_ptr<DecoratorOnlyOne> pDec1 = std::make_shared<DecoratorOnlyOne>(pCom1);

    pDec1->Operation();

    std::cout << "-----------------------------" << "\n";
    pDec.reset();
    pDec = nullptr;
    std::cout << "-----------------------------" << "\n";

    pDec1.reset();
    pDec1 = nullptr;
}