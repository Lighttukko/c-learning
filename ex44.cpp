#include <iostream>

void changer(int num1, int num2);
void realchanger(int &num1, int &num2);

int main(){
    int leo = 3;
    int lin = leo;
    int &leolin = leo;
    leo = 4;

    std::cout << leo << std::endl << lin << std::endl << leolin << std::endl;

    int num1 = 4;
    int num2 = 6;
    std::cout << &num1 << "\n"<<&num2 << "\n";
    changer(num1, num2);
    std::cout << num1 << "  " << num2 << "\n";
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    std::cout << num1 << "\n" << num2 << "\n";


    realchanger(num1, num2);
    std::cout << num1 << "\n" << num2 << "\n";


    return 0;
}




void changer(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    std::cout << &num1 << "\n"<<&num2 << "\n";

}


void realchanger(int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    // std::cout << &num1 << "\n"<<&num2 << "\n";

}