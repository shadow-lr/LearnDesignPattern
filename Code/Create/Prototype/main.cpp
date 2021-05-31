#include <iostream>

#include "BasketBall.h"
#include "GameMgr.h"
#include <assert.h>

int main() {

    {
        GameMgr gameMgr;

        std::shared_ptr<Game> game = std::make_shared<BasketBall>("Li Ning");
        game->Play();

        assert(game != nullptr);

        gameMgr.Register("Li Ning", game);
        auto new_game = gameMgr.Create("Li Ning");
        assert(new_game != nullptr);
        new_game->Play();

        auto new_game2 = gameMgr.Create("NaKi");
        assert(new_game2 != nullptr);
        new_game2->Play();
    }

}