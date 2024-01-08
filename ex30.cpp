#include <iostream>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice;
    do{
        std::cout << "Enter choices 1, 2, 3, 4: ";
        std::cin >> choice;
        std::cin.clear(); // close teh alarm
        std::cin.ignore(10000, '\n'); // fflush();
        fflush(stdin);

        switch (choice){
            case 1:
                showbalance(balance);
                break;
            case 2:
                balance += deposit();
                showbalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showbalance(balance);
                break;
            case 4:
                std::cout << "exit!!\n";
                break;
            default: 
                std::cout << "not valid input!\n";
        }
    }while(choice != 4);

    return 0;
}
void showbalance(double balance){
    std::cout << "your balance is $" << balance << std::endl;

}

double deposit(){
    double amount;
    std::cout << "Enter deposit amount: ";
    std::cin >> amount;
    if (amount >= 0){
        return amount;
    }
    else{
        std::cout << "Not valid amount.";
        return 0;
    }
}

double withdraw(double balance){
    double amount;
    std::cout << "Enter withdraw amount: ";
    std::cin >> amount;
    if (amount > balance){
        std::cout << "insufficient balance to withdraw.\n";
        return 0;
    }
    else if (amount >= 0){
        return amount;
    }
    else{
        std::cout << "Not valid amount.\n";
        return 0;
    }
}
