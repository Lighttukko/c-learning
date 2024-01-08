#include <iostream>

int main(){
    std::string students[] = {"leo", "lin", "boss"};

    for(std::string element:students){
    std::cout << element << std::endl;
    }

    for(int i = 0; i < sizeof(students)/sizeof(std::string); ++i){
    std::cout << students[i] << std::endl;
    }

    return 0;
}