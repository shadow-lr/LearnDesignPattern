#include "Barbecuer.h"
#include "ConcreteCommand.h"
#include "Waiter.h"

int main() {
    // 生成烤肉师傅、服务员、订单对象
    Person *p_cook = new Barbecuer();
    Command *p_mutton = new BackMuttonCommand(p_cook);
    Command *p_chickenwing = new BackChickenWingCommand(p_cook);

    Waiter *p_waiter = new Waiter();

    // 将订单对象推送到命令队列
    p_waiter->SetOrder(p_mutton);
    p_waiter->SetOrder(p_chickenwing);

    // 服务员通知烤肉师傅具体订单
    p_waiter->Notify();

    delete p_cook;
    p_cook = nullptr;

    delete p_mutton;
    p_mutton = nullptr;

    delete p_chickenwing;
    p_chickenwing = nullptr;

    delete p_waiter;
    p_waiter = nullptr;
}
