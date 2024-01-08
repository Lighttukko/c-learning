#include <iostream>

int main(){
    int number;
    std::cout << "PLease enter number: ";
    std::cin >> number;
    switch (number){
        case 1:
            std::cout << "it's 1.";
            break;
        case 2:
            std::cout << "it's 2.";
            break;
        case 3:
            std::cout << "it's 3.";
            break;
        case 4:
            std::cout << "it's 4.";
            break;
        case 5:
            std::cout << "it's 5.";
            break;
        default:
            std::cout << "Not in limit";
    }
    return 0;
}