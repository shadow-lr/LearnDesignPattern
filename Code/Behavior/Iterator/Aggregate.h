#pragma once

#include "Book.h"
#include <vector>

template<class T>
class Aggregate {
public:
    Aggregate() {}

    virtual ~Aggregate() {}

    virtual T GetItem(int idx) = 0;

    virtual int GetSize() = 0;
};


template<typename T>
class ConcreteAggreaget : public Aggregate<T> {
public:
    explicit ConcreteAggreaget(std::vector<T> _objs) : objs(_objs) {}

    T GetItem(int idx) {
        if (idx < 0 || idx >= objs.size()) {
            return T();
        }
        return objs[idx];
    }

    int GetSize() { return objs.size(); }

private:
    std::vector<T> objs;
};