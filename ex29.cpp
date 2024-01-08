#include <iostream>

void leo();
void lin();
int num = 3;


int main(){
    int num = 1;
    std::cout << num << "\n";
    leo();
    lin();

    return 0;
}


void leo(){
    int num = 2;
    std::cout << num << "\n";
}

void lin(){
    std::cout << num << "\n";
}