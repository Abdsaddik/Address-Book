#include"Item.hpp"


Item::Item(std::string name_, std::string num , std::string attr ) : name{name_} {
    data.push_back(make_pair(num, attr));
}
void Item::rename(std::string name_){
    name = name_;
}


// add extra number with its attribute to the contact 
bool Item::extNum(std::string num, std::string attribut){
    if(!data.empty()){
        for(size_t it=0; it<data.size();it++){
            if(data.at(it).first == num && data.at(it).second == attribut){
                std::cout << "duplicated\n";
                return false;
            }
        }
    }
    data.push_back(make_pair(num, attribut));
    return true;
}

void Item::remNum(std::string num){
    for(size_t cnt=0; cnt<data.size();cnt++){
        if(data.at(cnt).first == num){
            data.erase(data.begin() + cnt);
        }
    }
}

std::ostream& operator<<(std::ostream& out, const Item& i){
    out << i.name << std::endl;
    for(auto it: i.data) {
        out << it.first << " (" << it.second << ")\n";
    }
    return out;
}

void Item::chngAttr(std::string num, std::string attribut){
    for(size_t it=0; it<data.size();it++){
        if(data.at(it).first == num){
            data.at(it).second = attribut;
        }
    }
}

std::string Item::getName() const{
    return name;
}
