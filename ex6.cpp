#include <iostream>

int main(){
    int num1 = 4;
    num1 = num1 + 3;
    std::cout << num1 << std::endl;
    num1 += 2;
    std::cout << num1 << std::endl;
    ++num1;//num1++;
    std::cout << num1 << std::endl;

    return 0;
}