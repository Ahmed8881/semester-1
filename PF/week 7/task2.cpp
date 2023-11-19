#include<iostream>
using namespace std;
void generateFibonacci(int lenght);
main(){
cout<<"Enter the length of the Fibonacci series: ";
int lenght;
cin>>lenght;
generateFibonacci(lenght);


}
void generateFibonacci(int lenght){
int num1=0;
int num2=1;
int next_num;
for(int x=0;x<lenght;x=x+1){
cout<<num1;
next_num=num1+num2;
num1=num2;
num2=next_num;

if(x!=lenght-1){
cout<<", ";
   
}
}
}