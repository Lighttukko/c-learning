#include <iostream>

int getdigit(const int);
int sumodddigit(const std::string);
int sumevedigit(const std::string);


int main(){

    std::string number;
    int result = 0;


    std::cout << "enter the number: ";
    std::cin >> number;

    result  = sumodddigit(number) + sumevedigit(number);

    if (!result % 10){
        std::cout << "valid!\n";
    }




    return 0;
}


int getdigit(const int number){

    return number % 10 + number / 10 % 10;
}
int sumodddigit(const std::string number){

    int sum = 0;

    for (int i = number.size() - 1; i >= 0; i-=2){

        sum += (number[i] - '0');
    }
    return sum;

}
int sumevedigit(const std::string number){

    int sum = 0;

    for (int i = number.size() - 2; i >= 0; i-=2){

        sum += getdigit((number[i] - '0') * 2);
    }

}