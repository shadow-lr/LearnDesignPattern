#include "Singleton.h"
#include "Magic_Singleton.h"

#include <iostream>

class MySingleTon {
public:
    MySingleTon() {}

    void Func() {
        std::cout << "MySingleTon execute funciton" << "\n";
    }

    ~MySingleTon() {}
};

class MyClass {
public:
    MyClass(const std::string &strData) : m_strData(strData) {
        std::cout << m_strData.data() << "\n";
    };

    ~MyClass() {
        std::cout << "destory" << "\n";
    };

private:
    std::string m_strData;
};

int main() {

    auto mySingleTon = Singleton<MySingleTon>::GetInstance();
    mySingleTon->Func();

    Singleton<MySingleTon>::DesInstance();

    auto myClass = Magic_Singleton<MyClass>::GetInstance("create");
    Magic_Singleton<MyClass>::DesInstance();
}