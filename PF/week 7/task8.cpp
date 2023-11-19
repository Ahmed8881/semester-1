#include <iostream>
using namespace std;
int calculateMoney(int age, int washprice, int price);
main()
{
    cout << "Enter Lilly's age: ";
    int age;
    cin >> age;

    cout << "Enter the price of the washing machine: ";
    int washprice;
    cin >> washprice;

    cout << "Enter the unit price of each toy: ";
    int price;
    cin >> price;

    int amount = calculateMoney(age, washprice, price);
    if (washprice < amount)
    {
        cout << "Yes!"<<endl<< (amount - washprice);
             
    }
    if (washprice > amount)
    {
        cout << "No!"<<endl<< (washprice-amount);
             
    }
}
int calculateMoney(int age, int washprice, int price)
{
    int even_number = age / 2;
    int odd_number = (age- even_number)* price;
    int current=10;
    int sum=0;
    for (int x = 0; x < even_number; x=x+1)
    {
        sum =sum + current;
        current = current+10;
    }
    sum=sum + odd_number - even_number;
    return sum;
}
