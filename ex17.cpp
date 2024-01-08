
//visit https://cplusplus.com/reference/string/string/
#include <iostream>
#include <string>

int main(){
    
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    if (name.length() > 12){
        std::cout << "can't be over 12";
    }
    else{
        std::cout << "the length is: " << name.length() << std::endl;
        std::cout << "welcome to leo's world \n" << "hi " << name << std::endl;
    }
    
    
    std::string name2;

    std::cout << "Enter name: ";
    getline(std::cin, name2);

    if (name2.empty()){
        std::cout << "You did not enter the name.\n";
    }
    else{
        std::cout << "welcome " << name2 << "\n";
    }
    name2.clear();
    std::cout << "hello" << name2 << std::endl;


    name.append("@gmail.com");
    std::cout << name << std::endl;

    std::cout << name.at(1) << std::endl;

    name.insert(0, "@");
    std::cout << name << std::endl;
    
    std::cout << name.find("leo")<< std::endl;
    std::cout << name.find('e')<< std::endl;

    name.erase(0, 2);
    std::cout << name << std::endl;


    return 0;
}