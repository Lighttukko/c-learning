#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int num = rand() % 6 + 1;
    switch (num){
        case 1:
            std::cout << "hi";
            break;
        case 2:
            std::cout << "no";
            break;
        case 3:
            std::cout << "yes";
            break;
        case 4:
            std::cout << "h4";
            break;
        case 5:
            std::cout << "h3";
            break;
        case 6:
            std::cout << "h6";
    }
    std::cout << "\n" << num << "\n";

    return 0;

}