#include <iostream>

int main(){
    std::string students[] = {"leo", "lin", "boss"};
    int grades[] = {2, 3, 4, 5};

    for(std::string element:students){
    std::cout << element << std::endl;
    }

    for(int i:grades){
    std::cout << i << std::endl;
    }

    return 0;
}