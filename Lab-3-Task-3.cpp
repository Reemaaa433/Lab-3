#include <iostream>
using namespace std;
 int main (){
    double score1, score2, score3, avg;
    cout<<"Enter the sores for course 1, and course 2 and 3 :";
    cin>> score1>>score2>>score3;
    avg = (score1 + score2 + score3) /3;
    if (avg>=90)
        cout << "Grade A";
    else if (avg>=80)
        cout << "Grade B";
    else if (avg>=70)
        cout << "Grade C";
    else if (avg>=60)
        cout << "Grade D";
    else
        cout<< "Grade F";
    return 0;

}
