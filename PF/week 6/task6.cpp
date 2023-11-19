#include<iostream>
using namespace std;
float discount(float price,string day,string month);
main(){
    float price;
    string day,month;
    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> price;
    float payable=discount(price,day,month);
    cout << "Payable Amount after discount: " << payable;
}
float discount(float price,string day,string month){
    if(day=="Sunday" && (month=="October" || month=="August" || month=="March")){
        price=price-(price*0.1);
    }
    return price;
}