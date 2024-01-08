#include <iostream>


int main(){

    std::string foods[5];

    int size = sizeof(foods) / sizeof(std::string);

    for (int i = 0; i < size; ++i){
        std::cout << "Enter foods that you like: ";
        getline(std::cin, foods[i]);
    }

    for (std::string element : foods){
    std::cout << element << std::endl;
    }

    std::string eats[5];

    int size2 = sizeof(eats) / sizeof(std::string);

    for (int i = 0; i < size2; ++i){
        std::string  temp;
        std::cout << "Enter foods that you like: ";
        getline(std::cin, temp);
        if (temp == "q"){
            break;
        }
        else{
            eats[i] = temp;
        }
    }

    for (int i = 0; !eats[i].empty(); ++i){
    std::cout << eats[i] << std::endl;
    }

    return 0;
}