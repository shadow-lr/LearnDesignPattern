#include "Subject.h"
#include "ConcreteSubject.h"
#include "Proxy.h"

int main() {
    std::shared_ptr<Subject> subject1 = std::make_shared<ConcreteSubject>("Xiao Ming");

    std::shared_ptr<Subject> subject2 = std::make_shared<ConcreteSubject>("Xiao Hua");

    std::shared_ptr<Proxy> proxy = std::make_shared<Proxy>();
    proxy->Request();

    proxy->SetSubject(subject1);
    proxy->Request();


    proxy->SetSubject(subject2);
    proxy->Request();
}