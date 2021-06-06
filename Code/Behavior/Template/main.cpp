
#include "Computer.h"
#include "ComputerA.h"
#include "ComputerB.h"
#include <memory>

int main() {
    std::shared_ptr<Computer> comA = std::make_shared<ComputerA>();
    comA->product();

    std::cout << "\n";

    std::shared_ptr<Computer> comB = std::make_shared<ComputerB>();
    comB->product();
}