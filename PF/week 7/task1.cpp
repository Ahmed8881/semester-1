#include<iostream>
using namespace std;
void printTable(int number);
main(){
cout<<"Enter the number: ";
int number;
cin>>number;

printTable(number);












}
void printTable(int number){
int answer;
for(int x=1;x<11;x=x+1)
{
answer=number*x;

cout<<number<<" x "<<x<<" = "<<answer<<endl;





}





}