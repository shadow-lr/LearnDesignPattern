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

    buyer1->SendMessage("��������");
    seller1->SendMessage("���ӵ�Ȼ��!");

    buyer1->SendMessage("3000һ���°�ˮ�������");
    seller1->SendMessage("����");

    seller1->SendMessage("3500���ѿ���");
    buyer1->SendMessage("��,�ɽ�");

    delete buyer1;
    buyer1 = nullptr;

    delete seller1;
    seller1 = nullptr;

    delete mediator;
    mediator = nullptr;
}