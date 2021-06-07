#include "ConcreteElement.h"
#include "Element.h"
#include "ObjectStructure.h"
#include <memory>

int main() {
    std::shared_ptr<Employees> e = std::make_shared<Employees>();
    e->Attach(new Employee("XiaoLi", 18000, 8));
    e->Attach(new Employee("XiaoWang", 9000, 1));
    e->Attach(new Employee("XiaoBai", 13000, 5));
    e->Attach(new Employee("XiaoHu", 15000, 4));
    e->Attach(new Employee("XiaoZhang", 12000, 8));

    std::shared_ptr<Visitor> visitor = std::make_shared<VacationVisitor>();
    e->Accept(visitor.get());

    std::cout << "\n";

    visitor = std::make_shared<IncomeVisitor>();
    e->Accept(visitor.get());

}
