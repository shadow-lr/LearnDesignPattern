#include "Singleton.h"

#include <iostream>

class MySingleTon {
public:
    MySingleTon() {}

    void Func() {
        std::cout << "MySingleTon execute funciton" << "\n";
    }

    ~MySingleTon() {}
};

int main() {

    auto mySingleTon = Singleton < MySingleTon > ::GetInstance();
    mySingleTon->Func();

    Singleton < MySingleTon > ::DesInstance();
}