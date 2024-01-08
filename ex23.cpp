#include <iostream>
// random number
int main(){

    srand(time(NULL));
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << num2 << num3 <<std::endl;



    return 0;
}