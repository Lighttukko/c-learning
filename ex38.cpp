#include <iostream>


void change(int[]);//must need 8 for reference.
//bubble sort!!!
int main(){
    int array[] = {6, 3, 7, 2, 4, 10, 1, 9};
    int size = sizeof(array) / sizeof(int);
    int temp;
    std::cout << array<<"\n";
    change(array);
    // for (int i = 0; i < size - 1; ++i){
    //     for (int j = 0; j < size - 1 - i; ++j){
    //             if (array[j] > array[j+1]){
    //                 temp = array[j];
    //                 array[j] = array[j+1];
    //                 array[j+1] = temp;
    //             }
    //     }
        
    // }

    for(int x:array){
        std::cout << x << "\n";
    }
    // for(int x = 0; x < size; ++x){
    //     std::cout << array[x] << "\n";
    // }

    return 0;
}



void change(int array[]){
    // int array[] = (&array)[];
    std::cout << array << "\n";
    int size = sizeof(array);
    int temp;
    for (int i = 0; i < size - 1; ++i){
        for (int j = 0; j < size - 1 - i; ++j){
            if (array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int x = 0; x < size; ++x){
        std::cout << array[x] << "\n";
    }
    std::cout << array <<"\n";
}