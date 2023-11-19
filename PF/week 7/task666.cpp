#include <iostream>
using namespace std;
int GCD(int num1,int num2);
int LCM(int num1,int num2,int result1);
main() 
{
    	int num1,num2,result1,result2;
    	cout<<"Enter the first number: ";
    	cin>>num1;
	cout<<"Enter the second number: ";
    	cin>>num2;
    	result1=GCD(num1,num2);
	result2=LCM(num1,num2,result1);
    	cout<<"GCD: "<<result1<<endl;
	cout<<"LCM: "<<result2;
}
int GCD(int num1,int num2)
{ 
	int gcd=0;
    	while(num2!=0) 
	{
        gcd=num2;
	num2=num1%num2;
	num1=gcd;
	}
	return num1;
}
int LCM(int num1,int num2,int result1)
{
	int lcm;
	lcm=(num1*num2)/result1;
	return lcm;
}

