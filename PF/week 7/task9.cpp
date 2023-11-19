#include <iostream>
using namespace std;
int calculatePrice(int money, int year);
main()
{
    int money, year;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;
    int result = calculatePrice(money, year);
    if (result >= 0)
    {
        cout << "Yes! He will live a carefree life and will have " << result << " dollars left.";
    }
    else
    {
        cout << "He will need " << abs(result) << " dollars to survive.";
    }
}

int calculatePrice(int money, int year)
{
    int money2 = 0;
    int age = 18;
    for (int x = 1800; x <= year; x=x+1)
    {
        if (x % 2 == 0)
        {
            money2 =money2+12000;
        }
        if(x%2!=0)
        {
            money2 += 12000 + 50 * age;
        }
        age=age+1;
    }
    money = money - money2;
    return money;
}