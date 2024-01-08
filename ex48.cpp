#include <iostream>


int main(){

    int *pointer = nullptr;
    int x =123;
    pointer = &x;

    if (pointer == nullptr){
        std::cout << "nothing is pointed.\n";
    }
    else{
    std::cout << *pointer << "\n";
    }

    return 0;
}