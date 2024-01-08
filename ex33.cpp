#include <iostream>

int main(){
    double num = 3.9;
    char grade = 'A';
    char grades[] = {grade, 'B', 'C', 'D', 'F'};
    std::string students[] = {"leo", "lin", "leonardo"};


    std::cout << sizeof(num) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(std::string) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";


    return 0;
}