#include <iostream>
#include <vector>
#include <memory>

class IProduct;

class IFactory;

class IDCard;

class IDCardFactory;

class IProduct {
public:
    virtual ~IProduct() {}

    virtual void use() = 0;

    virtual void print() = 0;
};

class IFactory {
public:
    virtual ~IFactory() {}

    virtual void registerProduct(std::shared_ptr<IProduct>) = 0;

    virtual std::shared_ptr<IProduct> createProduct(const std::string &owner) = 0;

    virtual std::shared_ptr<IProduct> create(const std::string &owner) {
        std::shared_ptr<IProduct> pro = createProduct(owner);
        registerProduct(pro);
        return pro;
    }

    virtual void printAllInfo() = 0;
};

class IDCard : public IProduct {
public:
    void use() override {
        std::cout << "use IDCard with owner : " << m_ower << "\n";
    }

    IDCard(const std::string &owner) : m_ower(owner) {}

    void print() override {
        std::cout << "m_ower : " << m_ower << "\n";
    }

private:
    std::string m_ower;
    std::string m_id;
};

class IDCardFactory : public IFactory {
public:
    std::shared_ptr<IProduct> createProduct(const std::string &owner) override {
        return std::make_shared<IDCard>(owner);
    }

    void registerProduct(std::shared_ptr<IProduct> pro) override {
        m_productList.push_back(pro);
    }

    void printAllInfo() override {
        std::cout << "All IDCard Info : " << "\n";
        for (auto it = m_productList.begin(); it != m_productList.end(); ++it) {
            (*it)->print();
        }
    }

private:
    std::vector<std::shared_ptr<IProduct>> m_productList;
};


int main() {
    std::shared_ptr<IFactory> iFactory = std::make_shared<IDCardFactory>();
    std::shared_ptr<IProduct> product1 = iFactory->create("p1");
    std::shared_ptr<IProduct> product2 = iFactory->create("p2");

    product1->use();
    product2->use();

    iFactory->printAllInfo();
}
