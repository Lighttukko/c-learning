#include <iostream>

void hi(std::string leo);
void function (std::string name, int age);

void birthday(){
    for (int i = 0; i < 5; i++){
    std::cout << "Happy birthday\n";
    }
}

int main(){
    std::string name1 = "leo";
    int age1 = 18;
    birthday();
    hi("leo");
    function(name1, age1);
    return 0;
}

void hi(std::string leo){
    std::cout << "hi " << leo << "\n";
}


void function (std::string name, int age){
    std::cout << "hi " << name << "\n" << "your age is " << age << "\n";
}