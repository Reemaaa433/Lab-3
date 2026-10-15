#include <iostream>
using namespace std;

int main() {
    int id, age;
    cout << "Please, enter the ID number and your age:\n";
    cin >> id >> age;

    if (age >= 18) {
        char classType;
        cout << "Please choose class type (A, B, or C): ";
        cin >> classType;

        int price = 0;
        switch (classType) {
            case 'A':
            case 'a':
                price = 100;
                break;
            case 'B':
            case 'b':
                price = 75;
                break;
            case 'C':
            case 'c':
                price = 50;
                break;
            default:
                cout << "Invalid class choice.\n";
                return 0;
        }

        int seats;
        cout << "Enter number of seats to book: ";
        cin >> seats;

        int totalCost = seats * price;
        cout << "Total cost = " << totalCost << "$\n";
    } else {
        cout << "Sorry...You are not allowed to book a seat\n";
    }

    return 0;
}
