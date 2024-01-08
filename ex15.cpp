#include <iostream>

int main(){

    int num = 6, num1 = 9;
    bool hi = !true;

    if (num > 9 || num < 3){
        std::cout << "between 3 and 9." << std::endl;
    } 
    else if (num <= 7 && num1 > 5){
        std::cout << "correct" << std::endl;
    } 
    else{
        std::cout << "nothing" << std::endl;
    }

    if (hi){
        std::cout << "hi" << "\n";
    } else{
        std::cout << "hello" << "\n";
        std::cout << hi << "\n";
    }

    return 0;
}