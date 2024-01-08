#include <iostream>
#include <cmath>

int main(){
    double num1;
    double num2;
    
    std::cout << "Please enter num1: ";
    std::cin >> num1;
    std::cout << "Please enter num2: ";
    std::cin >> num2;
    double result = sqrt(pow(num1, 2) + pow(num2, 2));

    std::cout << "the answer is: " << result << std::endl;
    return 0;
}
