#include<iostream>
using namespace std;
int totalDigits(int number);
main(){
cout<<"Enter a number: ";
int number;
cin>>number;

int result=totalDigits(number);
cout<<"Total number of digits: "<<result;

}
int totalDigits(int number){
int lenght=0;
while (number!=0)
{
number=number/10;
lenght=lenght+1;
}
if(number==0){return 1;}
return lenght;
}
