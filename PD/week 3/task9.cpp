#include<iostream>
using namespace std;
main(){
	cout<<"Enter a 4-digit number: ";
	int num;
	cin>>num;

	int a,b;
	int sum;

	a=num%10;
	sum=a;
	
	a=num/10;
	b=a % 10;
	sum=sum+b;

	a= num/100;
	b=a % 10;
	sum=sum+b;

	a=num/1000;
	b=a % 10;
	sum= sum+b;
	cout<<"Sum of the individual digits: " << sum;








}