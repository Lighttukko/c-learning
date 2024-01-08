#include <iostream>

namespace lin{
    int leo = 5;
}
namespace leo {

    float linn = 3.253f;
}


int main(){
    std::cout << lin::leo << std::endl;
    float linn = 4.43;
    std::cout << linn << std::endl;
    std::cout << leo::linn << std::endl;
    return 0;
}

// remind for g++
/*
g++ -o ex4 ex4.cpp
./ex4
*/