#include <iostream>
#include <iomanip>

int main(){
    std::string str1 = "leo is cool";
    int num1;
    num1 = 4;
    float num2 = 3.1415f;
    short num3 = 4;
    double num4 = 3.123456789;
    char chr1 = 103;
    bool bol1 = true;
    std::cout << num4 << " " << num3 << " " << num2 << " " << num1 << std::endl << str1 << std::endl;
    std::cout << chr1 << "\n";
    std::cout << bol1 << std::endl;
    std::cout << std::setprecision(10) << num4;
    return 0;
}
