#include <iostream>

int main(){

    int num1;

    std::cout << "Please enter a number: ";
    std::cin >> num1;

    std::cout << "Your answer is " << num1 << std::endl;

    int num2;

    std::cout << "Please enter a number2: ";
    std::cin >> num2;

    std::cout << "Your answer is " << num2 << std::endl;
    std::string str;

    std::cout << "enter a sentence: "; 
    std::getline(std::cin >> std::ws, str);

    std::cout << "your input is: " << str << std::endl;

    return 0;
}