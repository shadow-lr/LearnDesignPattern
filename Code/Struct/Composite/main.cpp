#include "ConcreteCompany.h"
#include "FinanceDepartment.h"
#include "HRDepartment.h"

// ʹ���������ݾ���һ����(Ҳ���Գ�������뵥����һ����)��������ݹ�ṹ��ģʽ
int main() {

    {
        // �ܹ�˾
        std::shared_ptr<Company> root = std::make_shared<ConcreteCompany>("�ܹ�˾");
        std::shared_ptr<Company> leaf1 = std::make_shared<FinanceDepartment>("����");
        std::shared_ptr<Company> leaf2 = std::make_shared<HRDepartment>("������Դ��");

        root->Add(leaf1);
        root->Add(leaf2);

        // �ֹ�˾A
        std::shared_ptr<Company> mid1 = std::make_shared<ConcreteCompany>("�ֹ�˾A");
        std::shared_ptr<Company> leaf3 = std::make_shared<FinanceDepartment>("����");
        std::shared_ptr<Company> leaf4 = std::make_shared<HRDepartment>("������Դ��");

        mid1->Add(leaf3);
        mid1->Add(leaf4);
        root->Add(mid1);

        // �ֹ�˾B
        std::shared_ptr<Company> mid2 = std::make_shared<ConcreteCompany>("�ֹ�˾B");
        std::shared_ptr<FinanceDepartment> leaf5 = std::make_shared<FinanceDepartment>("����");
        std::shared_ptr<HRDepartment> leaf6 = std::make_shared<HRDepartment>("������Դ��");
        mid2->Add(leaf5);
        mid2->Add(leaf6);
        root->Add(mid2);

        root->Show(0);
    }

}