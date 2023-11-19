#include<iostream>
using namespace std;
int findGreatest(int a,int b,int c);
main(){
    int a,b,c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    int great=findGreatest(a,b,c);
    cout << "The greatest number among "<<a<<", "<<b<<", and "<<c<<" is: "<<great;
}
int findGreatest(int a,int b,int c){
if(a>b && a>c)
{
        return a;
    }
if(b>a && b>c)
{
        return b;
}
    else{
        return c;
}
}