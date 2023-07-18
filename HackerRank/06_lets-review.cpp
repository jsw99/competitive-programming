#include <iostream>
#include <vector>

int main(){
    int t;
    std::cin >> t;

    std::vector<std::string> input_vec;

    for(int i=0; i<t; ++i){
        std::string temp;
        std::getline(std::cin>>std::ws, temp);
        input_vec.push_back(temp);
    }

    for(int i=0; i<input_vec.size(); ++i){
        for(int j=0; j<input_vec[i].size(); j+=2){
            std::cout << input_vec[i][j];
        }

        std::cout << " ";

        for(int j=1; j<input_vec[i].size(); j+=2){
            std::cout << input_vec[i][j];
        }

        std::cout << "\n";

    }

    return 0;
}