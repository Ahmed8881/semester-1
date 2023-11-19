#include<iostream>
using namespace std;
float min( float number1, float number2);
main(){
	cout<<"Enter the first number: "; 
	float number1;
	cin>>number1;

	cout<<"Enter the second number: ";
	float number2;
	cin>>number2;
	min(number1,number2);
}

float min( float number1, float number2){
if(number1>number2){
cout<<"The minimum of "<<number1<<" and "<<number2<<" is: "<<number2;
}

if(number1<number2){
cout<<"The minimum of "<<number1<<" and "<<number2<<" is: "<<number1;
}
return(0);
}









