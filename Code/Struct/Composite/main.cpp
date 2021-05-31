#include "ConcreteCompany.h"
#include "FinanceDepartment.h"
#include "HRDepartment.h"

// 使容器与内容具有一致性(也可以称作多个与单个的一致性)，创造出递归结构的模式
int main() {

    {
        // 总公司
        std::shared_ptr<Company> root = std::make_shared<ConcreteCompany>("总公司");
        std::shared_ptr<Company> leaf1 = std::make_shared<FinanceDepartment>("财务部");
        std::shared_ptr<Company> leaf2 = std::make_shared<HRDepartment>("人力资源部");

        root->Add(leaf1);
        root->Add(leaf2);

        // 分公司A
        std::shared_ptr<Company> mid1 = std::make_shared<ConcreteCompany>("分公司A");
        std::shared_ptr<Company> leaf3 = std::make_shared<FinanceDepartment>("财务部");
        std::shared_ptr<Company> leaf4 = std::make_shared<HRDepartment>("人力资源部");

        mid1->Add(leaf3);
        mid1->Add(leaf4);
        root->Add(mid1);

        // 分公司B
        std::shared_ptr<Company> mid2 = std::make_shared<ConcreteCompany>("分公司B");
        std::shared_ptr<FinanceDepartment> leaf5 = std::make_shared<FinanceDepartment>("财务部");
        std::shared_ptr<HRDepartment> leaf6 = std::make_shared<HRDepartment>("人力资源部");
        mid2->Add(leaf5);
        mid2->Add(leaf6);
        root->Add(mid2);

        root->Show(0);
    }

}