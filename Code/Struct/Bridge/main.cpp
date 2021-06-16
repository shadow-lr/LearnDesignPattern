
#include "Abstraction.h"
#include "AbstractionImplement.h"

int main() {

    /*
     *
        Bridge模式将抽象和实现分别独立实现，在代码中就是Abstraction类和AbstractionImplement类
        并且抽象和实现都是可以分别独立地变化，系统的耦合性也得到了很好的降低
     * */

    //实现部分ConcreteAbstractionImplementA
    AbstractionImplement *imp = new ConcreteAbstractionImplementA();

    //抽象部分RefinedAbstractionA
    Abstraction *abs = new RefinedAbstractionA(imp);

    abs->Operation();

    std::cout << "--------------------------" << std::endl;

    abs = new RefinedAbstractionB(imp);
    abs->Operation();

    imp = new ConcreteAbstractionImplementB();
    abs = new RefinedAbstractionB(imp);
    abs->Operation();

    delete imp;
    imp = nullptr;
    delete abs;
    abs = nullptr;
}