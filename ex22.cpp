#include <iostream>


int main(){

    for (int i = 0; i < 5; ++i){
        for (int j = 1; j <= 3; ++j){
            std::cout << j;
        }
        std::cout << "\n";
    }

    return 0;
}