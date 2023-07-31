#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int remainder = n;
    int consecutive_1 = 0;
    int temp = 0;

    while(n > 0){
        remainder = n % 2;
        if(remainder == 1){
            consecutive_1 ++;
        }
        else{
            if(consecutive_1 >= temp){
                temp = consecutive_1;
            }
            consecutive_1 = 0;
        }
        n /= 2;
    }

    if(consecutive_1 > temp){
        std::cout << consecutive_1 << std::endl;
    }
    else{
        std::cout << temp << std::endl;
    }
    
    return 0;
}