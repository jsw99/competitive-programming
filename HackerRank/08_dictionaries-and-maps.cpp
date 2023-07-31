#include <iostream>
#include <string>
#include <map>

int main(){
    int n;
    std::cin >> n;
    std::string name;
    int phone_num;
    std::map<std::string, int> phone_book;

    for(int i=0; i<n; ++i){
        std::cin >> name;
        std::cin >> phone_num;
        phone_book[name] = phone_num;
    }

    while(std::cin >> name){//whie(true) --> time exceeds limit
        if(phone_book[name] == 0){
            std::cout << "Not found" << std::endl;
        }
        else{
            std::cout << name << "=" << phone_book[name] << std::endl;
        }
    }

    return 0;
}