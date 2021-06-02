#include <iostream>

#include "Game.h"
#include "GameValue.h"
#include "Caretake.h"

int main() {
    GameValue v1 = {0, "AK", "3K"};
    Game game(v1);  // 初始值
    game.AddGrade();
    game.ShowValue();
    std::cout << "----------" << "\n";
    Caretake care;
    care.Save(game.SaveValue());    // 保存当前值
    game.AddGrade();    // 修改当前值
    game.ReplaceArm("M16");
    game.ReplaceCorps("123");
    game.ShowValue();
    std::cout << "----------" << "\n";
    game.Load(care.Load()); // 恢复初始值
    game.ShowValue();
}