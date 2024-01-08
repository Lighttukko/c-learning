#include <iostream>


int main() {
    
    int answer;
    int guesses;
    int times = 20;

    srand(time(NULL));
    answer = rand() % 100 + 1;


    do {
        std::cout << "You have " << times << " guesses." <<" Enter your guess: ";
        std::cin >> guesses;
        --times;
        if (guesses > answer){
            std::cout << "too high\n";
        }
        if (guesses < answer){
            std::cout << "too low\n";
        }
    } while (answer != guesses && times > 0);
    
    if (times < 0){
        std::cout << "You lost!! the answer is " << answer << "\n";
    }
    else{
        std::cout << "you guessed in "<< 20 - times <<" times. The correct answer is " << answer << std::endl;
    }
    


    return 0;
}