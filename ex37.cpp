#include <iostream>

int searcher(int numbers[], int size, int number);


int main(){

    int index;
    int number;

    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    std::cout << &numbers << "\n";
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "please enter the number in the lists: ";
    std::cin >> number;

    if (std::cin.rdstate() != 0){
        std::cout << "not valid input\n";
        return 0;
        
    }
    
    index = searcher(numbers, size, number);
    if (index == -1){
        std::cout << number << " is not in the array.\n";
    }
    else{
        std::cout << number << " is at the index " << index << " of the array.\n";
    }
    return 0;
}



int searcher(int numbers[], int size, int number){

    std::cout << &numbers << "\n";

    for (int idx = 0; idx < size; ++idx){
        if (number == numbers[idx]){
            return idx;
        }
    }
    return -1;
}
