#pragma once

#include <iostream>
#include <memory>

// 调用Clone接口创建出与原来类型相同的对象,并非是指针的拷贝，而是重新创建

class Game {
public:
    virtual std::shared_ptr<Game> Clone() = 0;

    virtual ~Game() {}

    virtual void Play() = 0;
};