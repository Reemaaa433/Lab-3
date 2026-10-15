#include <iostream>
using namespace std;
int main (){

    int number;
    cout << "Enter the number:";
    cin >> number;
    switch (number % 2)
    {
    case 0:
        cout << "Even number";
        break;
    case 1:
        cout<<"Ood number";
        break;

    }

    return 0;
}
