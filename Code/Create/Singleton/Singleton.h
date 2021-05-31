#pragma once

#include <utility>
#include <memory>

template<typename T>
class Singleton {
public:
    // 获取全局单例对象
    static std::shared_ptr<T> GetInstance() {
        if (!instance) {
            instance = std::make_shared<T>();
        }
        return instance;
    }

    // 主动析构单例对象（一般不需要主动析构，除非特殊需求）
    static void DesInstance() {
        if (instance) {
            instance.reset();
            instance = nullptr;
        }
    }

private:
    explicit Singleton() {}

    ~Singleton() {}

    Singleton(const Singleton &) = delete;

    Singleton &operator=(const Singleton &) = delete;

private:
    static std::shared_ptr<T> instance;
};

template<typename T>
std::shared_ptr<T> Singleton<T>::instance = nullptr;