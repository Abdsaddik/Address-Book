#ifndef ADDRESSBOOK_HPP
#define ADDRESSBOOK_HPP

#include"Item.hpp"

class AddressBook{
    private:
    std::vector<Item> vec;

    public:
    explicit AddressBook(Item i);
    // add a contact to the contact vector
    bool addItem(const Item& i);
    bool addItem(std::string name, std::string num = "", std::string attr = "private");
    // remove a contact from the contact book
    void remItem(std::string name);
    // remove the whole number 
    void remNum(std::string name, std::string num);
    // extend only once
    bool extendNum(std::string name, std::string num, std::string attribut = "private");
    void changeAttr(std::string name, std::string num, std::string attribut);
    friend std::ostream& operator <<(std::ostream& out, const AddressBook& a);
    Item& operator[](uint32_t index);
};

#endif