#include <iostream>


double total(double costs[], int size);


int main(){

    double costs[5] = {3.2, 4.5, 5.3, 1.3, 5.6};
    // std::cout <<costs << "\n";
    int size = sizeof(costs) / sizeof(double);
    double final = total(costs, size);
    std::cout << "the total amount is " << final << std::endl;


    return 0;

}

// size in essential because costs[] is just a pointer.
double total(double costs[], int size){
    // std::cout <<sizeof(int) << "\n";
    double counter = 0;

    for (int i = 0; i < size; ++i){
        counter += costs[i];
    }

    return counter;
}