#pragma once

#include "IItem.h"
#include "IDCard.h"
#include "Television.h"
#include <functional>
#include <unordered_map>

class IFactory {
public:
    virtual ~IFactory() {}

    // 只提供接口，让对象负责具体的创建细节
    virtual std::shared_ptr<IDCard> createIDCard(const std::string &name, float value) = 0;

    virtual std::shared_ptr<Television> createTelevision(const std::string &name, float value, float period_of_use) = 0;
};

class IFactoryHelper {
public:
    static void registerFactory(const std::string &name, std::function<std::shared_ptr<IFactory>()> createCallBack) {
        m_createrMap.insert(std::make_pair(name, createCallBack));
    }

    static std::shared_ptr<IFactory> getFactory(const std::string &name) {
        auto itor = m_createrMap.find(name);
        return itor->second();
    }

private:
    static std::unordered_map<std::string, std::function<std::shared_ptr<IFactory>()>> m_createrMap;
};

std::unordered_map<std::string, std::function<std::shared_ptr<IFactory>()>> IFactoryHelper::m_createrMap;
