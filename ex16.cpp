#include <iostream>

// temperature converter
int main(){

    double initial;
    char unit;
    double result;

    std::cout << "Please enter the f for fahren or c for celcius: ";
    std::cin >> unit;
    std::cout << "Please enter its degree: ";
    std::cin >> initial;

    if (unit == 'f' || unit == 'F'){
        result = initial * 1.8 + 32;
        std::cout << "The convertion is from " << initial << " fahren to " << result << " celcius"<< std::endl;
        }
    else if(unit == 'C' || unit == 'c'){
        result = (initial - 32) / 1.8;
        std::cout << "The convertion is from " << initial << " celcius to " << result << " fahren"<< std::endl;
        }
    else{
        std::cout << "does not exist";
    }


    return 0;
}