#include <iostream>


double square(double li);
double cube(double li);
std::string concatination(std::string str1, std::string str2);


int main(){
    double li = 5.0;
    std::string name = "leo";
    std::string last = "lin";

    double area = square(li);
    double volume = cube(li);
    std::string uni = concatination(name, last);
    std::cout << area << "\n";
    std::cout << volume << "\n";
    std::cout << uni << "\n";

    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length*length* length;
}

std::string concatination(std::string str1, std::string str2){
    return str1 + ' ' +str2;
}
