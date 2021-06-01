#pragma once

#include <iostream>
#include <string>
#include <memory>

//Component抽象基类，为组合中的对象声明接口,声明了类共有接口的缺省行为(如这里的Add,Remove函数),
//声明一个接口函数(Show)可以访问Component的子组件.

class Company {
public:
    virtual ~Company() {}

    Company(const std::string& name) : m_name(name) {}

    virtual void Add(std::shared_ptr<Company> pCom) {}

    virtual void Remove(std::shared_ptr<Company> pCom) {}

    virtual void Show(int depth) {}

protected:
    std::string m_name;
};