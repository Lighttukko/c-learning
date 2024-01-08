#include <iostream>

int main(){

    int age;
    std::cout << "Please enter your age: ";
    std::cin >> age;
    if (age >= 18 && age <= 60){
        std::cout << "You are allowed." << std::endl;
    } else if (age > 60){
        std::cout << "you are too old." << std::endl;
    } else {
        std::cout << "You are not allowed!!!" << "\n";
    }
    return 0;
}