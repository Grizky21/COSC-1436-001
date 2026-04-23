#include <iostream>
#include <string>

#include "ageFunction.h"


using namespace std;


int main()
{
    int a = 123;

    cout << "Do you want to change the value of a - if so, enter the new value: \n";

    cin >> a;
    cin.ignore();

    cout << "Enter your name: \n";

    string yourName;
    getline(cin, yourName);

    commentOnUserAge(5);

}
