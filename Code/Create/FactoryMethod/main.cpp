#include "IProduct.h"
#include "IDCard.h"
#include "IFactory.h"
#include "IDCardFactory.h"


int main() {
    std::shared_ptr<IFactory> iFactory = std::make_shared<IDCardFactory>();
    std::shared_ptr<IProduct> product1 = iFactory->create("p1");
    std::shared_ptr<IProduct> product2 = iFactory->create("p2");

    product1->use();
    product2->use();

    iFactory->printAllInfo();
}
