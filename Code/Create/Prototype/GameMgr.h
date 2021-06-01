#pragma once

#include "IGame.h"
#include <unordered_map>

class GameMgr {
public:
    void Register(const std::string& name, const std::shared_ptr<Game>& game) {
        if (this->m_gameMap.find(name) != this->m_gameMap.end()) {
            std::cout << "之前已经注册过，操作失败" << "\n";
        } else {
            m_gameMap[name] = game;
        }
    }

    std::shared_ptr<Game> Create(const std::string& name) {
        // 之前注册过，则直接创建
        if (this->m_gameMap.find(name) != this->m_gameMap.end()) {
            return this->m_gameMap[name]->Clone();
        } else {
            return nullptr;
        }
    }

private:
    std::unordered_map<std::string, std::shared_ptr<Game>> m_gameMap;
};
