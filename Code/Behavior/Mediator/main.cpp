#include "Buyer.h"
#include "Seller.h"
#include "HouseMediator.h"
#include <iostream>

int main() {
    Person *buyer1 = new Buyer();
    Person *seller1 = new Seller();

    Mediator *mediator = new HouseMediator();
    mediator->SetBuyer(*buyer1);
    mediator->SetSeller(*seller1);

    buyer1->SetMediator(*mediator);
    seller1->SetMediator(*mediator);

    buyer1->SendMessage("房子卖吗");
    seller1->SendMessage("房子当然卖!");

    buyer1->SendMessage("3000一个月包水电可以吗");
    seller1->SendMessage("不中");

    seller1->SendMessage("3500不难砍了");
    buyer1->SendMessage("行,成交");

    delete buyer1;
    buyer1 = nullptr;

    delete seller1;
    seller1 = nullptr;

    delete mediator;
    mediator = nullptr;
}