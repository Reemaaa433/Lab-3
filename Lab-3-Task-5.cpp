#include <iostream>
using namespace std;

int main ()
{
    char operation;
    double num1, num2;
    cout << "Enter two numbers :";
    cin >> num1 >> num2;
    cout << "Enter the operation(+,-,*,/) :";
    cin >> operation;

    switch (operation)
    {
        case '+':
            cout<<"The result is:"<< num1 + num2;
            break;
        case '-':
            cout<<"The result is:"<< num1 - num2;
            break;
        case '*':
            cout<<"The result is:"<< num1 * num2;
            break;
        case '/':
            cout<<"The result is:"<< num1 /  num2;
            break;
        default:
            cout<<"Invalid operation";
    }

    return 0;
}
