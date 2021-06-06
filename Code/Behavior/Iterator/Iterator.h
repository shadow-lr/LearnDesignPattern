#pragma once

#include "Item.h"
#include "Aggregate.h"
#include <memory>

template<typename T>
class Iterator {
public:
    virtual ~Iterator() {}

    virtual bool HasNext() = 0;

    virtual T next() = 0;

    virtual int GetCurIndex() = 0;

private:
    int index = -1;
};

template<typename T>
class ConcreteIterator : public Iterator<T> {
public:
    explicit ConcreteIterator(std::shared_ptr<Aggregate<T>> aggregates, int idx = 0) : _ag(aggregates), _idx(idx) {}

    bool HasNext() override {
        if (this->_idx < this->_ag->GetSize()) {
            return true;
        } else {
            return false;
        }
    }

    T next() override {
        return this->_ag->GetItem(this->_idx++);
    }

    int GetCurIndex() override { return _idx; }

private:
    std::shared_ptr<Aggregate<T>> _ag;
    int _idx;

};