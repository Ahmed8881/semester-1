#include <iostream>
using namespace std;
main()
{
    float quarters, dimes, nickels, pennies, totalAmountDue;
    
    cout << "Enter quarters: ";
    cin >> quarters;

    cout << "Enter dimes: ";
    cin >> dimes;

    cout << "Enter nickels: ";
    cin >> nickels;

    cout << "Enter pennies: ";
    cin >> pennies;

    cout << "Enter the total amount due: $";
    cin >> totalAmountDue;
    
    float money;
    money = (quarters * 0.25) + (dimes * 0.1) + (nickels * 0.05) + (pennies * 0.01);
    
    string result;
    if (money >= totalAmountDue)
        result = "Yes";
    else
        result = "No";

    cout << "Can you pay the amount? " << result;
}
