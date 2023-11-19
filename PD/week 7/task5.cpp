#include <iostream>
using namespace std;
bool isPrime(int number);
int main() {
    int number;
    cout << "Enter Number: ";
    cin >> number;
int output=isPrime(number);
cout<<output;
}


    bool isPrime(int number){
    int output;
    for(int x=2 ;x<number ; x++){
        output=number%x;
        if(output==0){
return false;
break;
        }


}
    return true;
}