#include<iostream>
using namespace std;
int parityAnalysis(int num);
main(){
 int num;
 cout << "Enter a 3-digit number: ";
 cin >> num;
cout << parityAnalysis(num);
}
int parityAnalysis(int num){
 int a,b,c;
 int final=num;
 a=num%10;
 num=num/10;
 b=num%10;
 num=num/10;
 c=num%10;
 a=a+b+c;
 if((a%2==0 && final%2==0)||(a%2 != 0 && final%2!=0)){
    return true;
 }
return false;
 }