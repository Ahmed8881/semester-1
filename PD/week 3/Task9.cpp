#include <iostream>
using namespace std;
main()
{
	int num;
	int sum;
	int num1;
	int num2;
	int num3;
	int num4;
	cout<<"Enter a 4-digit number: ";
	cin>> num;
	num1= (num%10);
	num=num/10;
	num2= (num%10);
	num=num/10;
	num3= (num%10);
	num=num/10;
	num4= (num%10);
	num=num/10;
	sum=num1+num2+num3+num4;
	cout<<"Sum of the individual digits: "<<sum;

	
	
	
}
