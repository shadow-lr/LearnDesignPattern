#pragma once

#include "IItem.h"
#include <vector>
#include <memory>

class ITray : public IItem {
public:
    virtual ~ITray() {}

    ITray(const std::string &name) : IItem(name) {}

    void addItem(std::shared_ptr<IItem> item) {
        m_itemList.push_back(item);
    }

protected:
    std::vector<std::shared_ptr<IItem>> m_itemList;
};