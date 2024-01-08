#include <iostream>


int main(){

    std::string name = "leo";
    std::string name2 = name;
    std::string &name3 = name;
    std::string *pname = &name;
    name = "lin";

    std::cout << name << std::endl;
    std::cout << name2 << std::endl;
    std::cout << name3 << std::endl;
    std::cout << pname << std::endl;
    std::cout << *pname << std::endl;


    std::string pizzas[5] = {"wo", "ni", "marco", "zhang", "jacky"};
    std::string *ppizzas = pizzas; // pizzas is reference of first item.

    std::cout << ppizzas[2] << std::endl << pizzas << "\n";
    std::cout << *(pizzas+4) << std::endl;//jump reference by 4.
    std::cout << *ppizzas << std::endl;//

    return 0;
}