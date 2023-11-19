#include<iostream>
using namespace std;


int calculateMoney(int age, int price, int toyprice);
main()
{
    int age,price,toyprice,remainingAmount;

    cout << "Enter Lilly's age: ";
    cin >> age;

    cout << "Enter the price of the washing machine: ";
    cin >> price;

    cout << "Enter the unit price of each toy: ";
    cin >> toyprice;

    int totalmoney=calculateMoney(age,price,toyprice);
    if(price>totalmoney)
    {
        remainingAmount=price-totalmoney;
        cout << "No!" << endl << remainingAmount;
    }
    if(totalmoney>=price)
    {
        remainingAmount=totalmoney-price;
        cout << "Yes!" << endl << remainingAmount;
    }
    

}
int calculateMoney(int age,int price,int toyprice)
{   int y=age;
    int money=0;
    int toygiftmoney=0;
    int numberoftoys=0;
    int x=1;
    int totalmoney;
    for(age;age>0;age=age-1)
    {
        if(age%2==0)
        {   
            money=money+(10*x)-1;
            x=x+1;
        }
        if(age%2!=0)
        {
            numberoftoys=numberoftoys+1;
            toygiftmoney=numberoftoys*toyprice;
        }
    }
    totalmoney=toygiftmoney+money;
    if(y%2==1)
    {
        totalmoney=totalmoney-toyprice;
    }
    return totalmoney;
}