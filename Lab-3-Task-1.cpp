#include <iostream>
using namespace std;

int main () {
    double temp;
    char unit;
    cout << "Please enter the temerature and measurement system(c or f) ";
    cin >> temp >> unit;
    if(unit == 'c'|| unit == 'C')
    {
        temp = temp * 9 / 5 + 32;
        cout << temp <<" degrees Fahrehruit";
    }
    else if (unit == 'f'|| unit == 'F')
    {
        temp = (temp -32) * 5/9;
        cout << temp <<"degrees Celsius";
    }
    else
        cout<<"Sorry,that is not recognized measurement system";
        
    return 0;
}
