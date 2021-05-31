#pragma once

#include "IGame.h"

class BasketBall : public Game {
public:
    BasketBall(std::string name) : m_name(name) {}

    ~BasketBall() {}

    // 重新创建指向BasketBall对象的新指针
    std::shared_ptr<Game> Clone() override {
        return std::make_shared<BasketBall>(this->m_name);
    }

    void Play() override {
        std::cout << "play basketball" << "\n";
    }

private:
    std::string m_name;
};