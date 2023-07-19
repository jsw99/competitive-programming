#include <iostream>
#include <string>
#include <vector>

int main(){
    int n;
    std::string temp;
    std::vector<std::string> A;
    std::string temp_substr;

    std::cin >> n;

    std::getline(std::cin >> std::ws, temp);

    auto pos = 0;
    std::string delimiter = " ";

    while((pos=temp.find(" ")) != std::string::npos){
        temp_substr = temp.substr(0, pos);
        A.push_back(temp_substr);
        temp.erase(0, pos + delimiter.length());
    }
    A.push_back(temp);

    for(int i=n-1; i>=0; --i){
        std::cout << A[i] << " ";
    }
    std::cout << "\n";

    /*
    int n;
    std::cin >> n
    int arr[n];

    for(int i=0; i<n; ++i){
        std::cin >> arr[i];
    }
    for(int i=n-1; i>=0; --i){
        std::cout << arr[i] << " ";
    }
    */

    return 0;
}