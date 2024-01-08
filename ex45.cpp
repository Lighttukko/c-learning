#include <iostream>


void caller( std::string,  int);
void caller2(const std::string, const int);


int main(){

    std::string name = "leo";
    int age = 18;

    caller(name, age);
    caller2(name, age);


    return 0;

}


void caller(std::string name, int age){
    name = "loe";
    age = 9;
    std::cout << name << age << "\n";

}


void caller2(const std::string name, const int age){
    // name = "loe"; //undoable for const.
    // age = 9;
    std::cout << name << age << "\n";
}


