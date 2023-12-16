#include<iostream>
using namespace std;
void isequal(float a,float b);
main() {
	float a,b;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	isequal (a,b);
			  }
void isequal(float a,float b)
         {
	   if(a!=b)
		{
		 cout<<"false";
				}
	   if(a==b)
		{
		  cout<<"true";
				}


         }
