#include <iostream>

int main(){
    int n;
    std::cin >> n;

    if(n % 2 == 1){
        std::cout << "Weird" << std::endl;
    }
    else if (n % 2 == 0 && n >= 2 && n <= 5){
        std::cout << "Not Weird" << std::endl;
    }
    else if (n % 2 == 0 && n >= 6 && n <= 20){
        std::cout << "Weird" << std::endl;
    }
    else{
        std::cout << "Not Weird" << std::endl;
    }

    return 0;
}