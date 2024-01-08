#include <iostream>

void pizza();
void pizza(std::string taste);
void pizza(std::string taste, std::string taste1);

int main(){
    pizza();
    pizza("lemon");
    pizza("ice", "sausage");
    return 0;
}


void pizza(){
    std::cout << "here is margherita pizza!\n";
}

void pizza(std::string leo){
    std::cout << "here is margherita pizza with " << leo << "!\n";
}

void pizza(std::string leo, std::string lin){
    std::cout << "here is margherita pizza with " << leo << " and " << lin << "!\n";
}

