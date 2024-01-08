#include <iostream>


int main(){

    std::string questions[] = {"1. what year c++ is created", "2. who invented c++", "3. what is predecessor of c++", "4. is the earth flat"};

    std::string answers[][4] = {{"a. 1969", "b. 1975", "c. 1985", "d. 1989"},
                                {"a. guido,", "b. bjarne", "c. john", "d. mark"},
                                {"a. C", "b. C+", "c. C--", "d. B++"},
                                {"a. yes", "b. no", "c. sometimes", "d. what;s earth"}};

    char answerkey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;


    for (int i = 0; i < size; i++){
        std::cout << questions[i] << "\n";
        for (int j = 0; j < sizeof(answers[i])/sizeof(answers[i][0]); ++j){
            std::cout << answers[i][j] << "  ";
        }
        std::cout << "\n";
        std::cout << "please answer: ";
        std::cin >> guess;
        guess = toupper(guess);
        if (guess == answerkey[i]){
            std::cout << "right!\n";
            ++score;
        }
        else{
            std::cout << "wrong!\n";
        }
        std::cout << "\n";
    }

    std::cout << "your score is " << score << std::endl;


    return 0;
}