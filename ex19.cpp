#include <iostream>

int main(){

    int number;

    do{
        std::cout << "Please enter the number: ";
        std::cin >> number;
    } while (number <= 0);

    std::cout << number << std::endl;
    return 0;
}