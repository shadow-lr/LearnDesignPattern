#include <iostream>
#include <vector>

class IProduct
{
public:
	virtual ~IProduct() {  }
	virtual void use() = 0;
};

class IFactory
{
public:
	virtual ~IFactory() {}
	virtual void registerProduct(IProduct*) = 0;
	virtual IProduct* createProduct(const std::string& owner) = 0;
	virtual IProduct* create(const std::string& owner)
	{
		auto* pro = createProduct(owner);
		registerProduct(pro);
		return pro;
	}
};

class IDCard : public IProduct
{
public:
	void use() override
	{
		std::cout << "use IDCard with owner" << "\n";
	}
	IDCard(const std::string& owner) :m_ower(owner) {  }
private:
	std::string m_ower;
	str::string m_id;
};

class IDCardFactory : public IFactory
{
public:
	IDCard* createProduct(const std::string& owner)override
	{
		return new IDCard(owner);
	}

	void use()override {

	}

	void registerProduct(IProduct* pro) override
	{
		m_productList.push_back(pro);
	}
private:
	std::vector<IProduct*> m_productList;
};


int main()
{

}
