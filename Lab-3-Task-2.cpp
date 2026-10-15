#include <iostream>
using namespace std;
int main ()
{
    double price, totalCost;
    int items;
    cout << "Enter the price:";
    cin >> price;
    cout << " Enter the price items :";
    cin >> items;
    totalCost = price * items;
    if( price >=100 && items > 2)
    {
        totalCost = totalCost - (totalCost * 0.05 );

        if(totalCost>1000)
        {
            totalCost = totalCost - (totalCost * 0.05 );
        }
    }
    else{
        totalCost = totalCost +10;
    }
    cout<< "total cost is ="<<totalCost;
    return 0;
}
