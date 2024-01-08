#include <iostream>

char computer();
char user();
void result(char mine, char opponent);
std::string converter(char character);



int main(){

    char input = user();
    char compu = computer();
    result(input, compu);

    return 0;
}


std::string converter(char character){
    std::string sentence;
    switch(character){
        case 'r':
            sentence = "rock";
            break;
        case 'p':
            sentence = "paper";
            break;
        case 's':
            sentence = "scissor";
    }

    return sentence;
}

char user(){
    char letter;

    do{
    std::cout << "Enter your choice(r, p, s): ";
    std::cin >> letter;
    // std::cout << std::cin.rdstate();
    std::cin.clear();
    fflush(stdin);
    } while (letter != 'r' && letter != 'p' && letter != 's');

    return letter;
}

char computer(){
    int num;
    char letter;

    srand(time(NULL));
    num = rand() % 3;

    switch (num){
        case 0:
            letter = 'r';
            break;
        case 1:
            letter = 'p';
            break;
        case 2:
            letter = 's';
    }
    return letter;
}

void result(char mine, char opponent){
    std::string opp;
    std::string min;

    opp = converter(opponent);
    min = converter(mine);

    std::cout << "Your choice is " << min << std::endl;
    std::cout << "The computer choice is " << opp << std::endl;

    if ((mine == 'r' && opponent == 's') || (mine == 'p' && opponent == 'r') || (mine == 's' && opponent == 'p')){
        std::cout << "Congratulation you win!\n";
    }
    else if ((mine == 'r' && opponent == 'r') || (mine == 'p' && opponent == 'p') || (mine == 's' && opponent == 's')){
        std::cout << "draw!\n";
    }
    else{
        std::cout << "You lost!\n";
    }
}