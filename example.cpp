#include <iostream>
using namespace std;

int main(){
    string name; //line 1
    cout << "Give me your name and surname:"<<endl;//line 2
    cin >> name;//line 3
    cout<< name << "\n";
    cin.ignore(10000, '\n');
    int age;//line 4
    cout << "Give me your age:" <<endl;//line 5
    cin >> age;//line 6
    cout<< age << "\n";
    cout << cin.rdstate() << "\n";
    cin.clear(); //new line is here :-)
    cout << cin.rdstate()<< endl;  //new line is here :-)  

    string name2;
    cout << "Give me your name and surname:"<< endl;
    cin >> name2;
    cin.ignore(10000, '\n'); //time to remove "Wlodarczyk" the wood log and make the stream flow

    int age2;
    cout << "Give me your age:" << endl;
    if (cin >> age2)
    cout << "Your age is equal to:" << endl;
    else
    {
    cin.clear(); // close teh alarm
    cin.ignore(10000, '\n'); //time to remove "Wlodarczyk" the wood log and make the stream flow
    cout << "Give me your age name as string I dare you";
    cin >> age2;
    cout << age2 << endl;
    }

    return 0;
}