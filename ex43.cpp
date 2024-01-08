#include <iostream>


int main(){

    std::string name = "leo";
    int age = 17;
    std::string last = "lin";
    bool student = true;

    std::cout << &name << "\n"; //140701916868960
    std::cout << &age << "\n"; //140701916868956
    std::cout << &last << "\n"; //140701916868928
    std::cout << &student << "\n"; //140701916868915
    std::cout << sizeof(last);
    


    return 0;
}