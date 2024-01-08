#include <iostream>

int main(){
    std::string name;

    // std::cout << "enter the name: ";
    // getline(std::cin, name);
    // std::cout << name;
    while (name.empty()){
        std::cout << "enter the name: ";
        getline(std::cin, name);
    }
    std::cout << name << std::endl;


    while (1){
        std::cout << "help\n";
    }

    return 0;
}