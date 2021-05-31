#pragma once

#include <string>
#include <memory>

class Entry {
public:
    virtual ~Entry() {}

    virtual std::string GetName() const = 0;

    virtual int GetSize() const = 0;

    virtual void AddEntry(std::shared_ptr<Entry> entry) {}

    virtual void PrintEntryList(const std::string &str) = 0;

    void PrintEntryList() {
        PrintEntryList("");
    };

    std::string ToString() const {
        return GetName() + " (" + std::to_string(GetSize()) + ")";
    }
};