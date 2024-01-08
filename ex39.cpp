#include <iostream>


int main(){

    std::string letters[150];
    int nums[150];

    std::fill(nums, nums + 150, 3);

    for (int i = 0; i < 150; ++i){
        std::cout << nums[i] << std::endl;
    }

        std::cout << letters << std::endl;
        std::cout << letters + 1 << std::endl;
    fill(letters, letters + 75, "leo");
    fill(letters+75, letters + 150, "lin");

    // for (int i = 0; i < 150; ++i){
    //     std::cout << letters[i] << std::endl;
    // }
    



    return 0;
}