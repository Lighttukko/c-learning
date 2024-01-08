#include <iostream>

int main(){
    int x = 3.14; // implicit, meaning made without yourself.
    std::cout << x << std::endl;
    std::cout << (char) 100 << std::endl;//explicit
    int num1 = 10;
    int num2 = 24;
    double result = num2 / (double)num1;
    std::cout << result << std::endl;
    double answer = num2 / num1;
    std::cout << answer << std::endl;
    return 0;

}