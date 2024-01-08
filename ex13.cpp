#include <iostream>

int main(){

    std::cout << "*********calculator*******\n";

    char op;
    double num1;
    double num2;
    double answer;

    std::cout << "Please enter the operator (+-*/): ";
    std::cin >> op;
    std::cout << "Please enter first num: ";
    std::cin >> num1;
    std::cout << "Please entersecond num: ";
    std::cin >> num2;

    switch(op){
        case '+':
            answer = num1 + num2;
            std::cout << num1 << op << num2 << " = " << answer << std::endl;
            break;
        case '-':
            answer = num1 - num2;
            std::cout << num1 << op << num2 << " = " << answer << std::endl;
            break;
        case '*':
            answer = num1 * num2;
            std::cout << num1 << op << num2 << " = " << answer << std::endl;
            break;
        case '/':
            answer = num1 / num2;
            std::cout << num1 << op << num2 << " = " << answer << std::endl;
            break;
        default:
            std::cout << "not recorded";
    }


    return 0;
}