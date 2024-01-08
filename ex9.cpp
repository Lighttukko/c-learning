#include <iostream>
#include <cmath>

int main(){
    double x = 3, y =4, z = 5;
    double answer;
    double answer2;
    int result = std::max(10, (int)y);
    int result2 = std::min(x, z);
    answer = pow(x, y);
    answer2 = sqrt(y);
    int answer3 = abs(-4);

    std::cout << result << std::endl;
    std::cout << result2 << std::endl;
    std::cout << answer << std::endl;
    std::cout << answer2 << std::endl;
    std::cout << answer3 << std::endl;
    
    return 0;
}