#include "Leader.h"
#include "Director.h"
#include "Monitor.h"
#include "Captain.h"
#include <memory>

int main() {

    {
        Leader *mentor = new Director(nullptr);
        Leader *captain = new Captain(mentor);
        Leader *monitor = new Monitor(captain);

        std::cout << "----Current request level is level_one----" << "\n";
        monitor->HandleRequest(Level_One);
        std::cout << "\n";

        std::cout << "----Current request level is level_two----" << "\n";
        monitor->HandleRequest(Level_Two);
        std::cout << "\n";

        std::cout << "----Current request level is level_three----" << "\n";
        monitor->HandleRequest(Level_Three);
        std::cout << "\n";

        std::cout << "----Current request level is level_num----" << "\n";
        monitor->HandleRequest(Level_Num);
        std::cout << "\n";
    }
}