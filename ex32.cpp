#include <iostream>


int main(){
    std::string car1 = "audi", car2 = "baoma", car3 = "lamborghini";

    std::string cars[] = {car1, car2, car3};
    cars[0] = "anymore audi";

    std::cout << cars[0] << std::endl;


    std::string houses[3];

    houses[0] = "villa";
    houses[1] = "apartment";
    houses[2] = "estate";

    std::cout << houses[0] << std::endl;
    std::cout << houses[1] << std::endl;
    std::cout << houses[2] << std::endl;

    return 0;
}