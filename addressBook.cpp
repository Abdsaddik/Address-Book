#include"addressBook.hpp"

AddressBook::AddressBook(Item i)  {vec.push_back(i);}
bool AddressBook::addItem(const Item& i){
    for(auto& it:vec){
        if(it.getName() == i.getName()){
            return false;
        }
    }
    vec.push_back(i);
    return true;
}
bool AddressBook::addItem(std::string name, std::string num , std::string attr){
    for(auto& it:vec){
        if(it.getName() == name) return false;
    }
    vec.push_back(Item{name, num, attr});
    return true;
}
void AddressBook::changeAttr(std::string name, std::string num, std::string attribut){
    for(uint32_t cnt=0; cnt<vec.size();cnt++){
        if(vec[cnt].getName() == name) vec[cnt].chngAttr(num, attribut);
    }
}
void AddressBook::remItem(std::string name){
    for(uint32_t cnt=0; cnt<vec.size();cnt++){
        if(vec[cnt].getName() == name) vec.erase(vec.begin()+cnt);
    }
}

void AddressBook::remNum(std::string name, std::string num){
    for(uint32_t cnt=0; cnt<vec.size();cnt++){
        if(vec[cnt].getName() == name) vec[cnt].remNum(num);
    }
}

bool AddressBook::extendNum(std::string name, std::string num, std::string attr){
    for(uint32_t cnt=0; cnt<vec.size();cnt++){
        if(vec[cnt].getName()==name){
            vec[cnt].extNum(num, attr);
            return true;
        }
    }
    return false;
}

Item& AddressBook::operator[](uint32_t index){
    return vec.at(index);
}

std::ostream& operator <<(std::ostream& out, const AddressBook& a){
    for (auto& it:a.vec){
        out << &it - &a.vec[0] + 1 << ": " << it;
    }
    return out;
}

