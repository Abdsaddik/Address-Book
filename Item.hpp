#ifndef ITEM_HPP
#define ITEM_HPP

#include<iostream>
#include<vector>

class Item{
    private:
    std::string name;
    std::vector<std::pair<std::string, std::string>> data;

    public:
    explicit Item(std::string name, std::string num = "", std::string attr = "private");
    void rename(std::string name);
    // extend number for a single contact
    bool extNum(std::string num, std::string attribut = "private");
    void remNum(std::string num);
    void chngAttr(std::string num, std::string attribut);
    std::string getName() const;
    friend std::ostream& operator<<(std::ostream& out, const Item& i);
};

#endif