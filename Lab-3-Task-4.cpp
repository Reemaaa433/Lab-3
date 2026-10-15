#include <iostream>
using namespace std;
int main ()
{
    int age;
    double weight, length, calories;
    char gender;
    cout << "Enter age:";
    cin >> age;
    cout << "Enter weight(kg):";
    cin >> weight;
    cout << "Enter length(cm):";
    cin >> length;
    cout << "Enter gender(M/F):";
    cin>>gender;
    if(gender=='m'|| gender=='M')
        calories = 6.25 * length + 10 * weight - age * 5 + 5;
    else if(gender == 'f'|| gender=='F')
        calories = 6.25 * length + 10 * weight - age * 5 - 161;
    else
        cout<< "invalid Gender";
        
    cout<<"calories needed ="<<calories;

    return 0;
}
