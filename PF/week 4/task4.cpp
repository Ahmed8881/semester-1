#include<iostream>
using namespace std;
void divi(int a, int b);
void mul(int a, int b);
void add(int a, int b);
void sub(int a, int b);

main(){
	cout<<"Enter 1st number: ";
	int a;
	cin>>a;

	cout<<"Enter 2nd number: ";
	int b;
	cin>>b;

	cout<<"Enter an operator (+, -, *, /): ";
	char o;
	cin>>o;

if(o== '+'){
	add(a,b);}

if(o== '-'){
	sub(a,b);}

if(o== '*'){
	mul(a,b);}

if(o== '/'){
	divi(a,b);}
}
void add(int a, int b){
	int res;
	res=a+b;
	cout<<"Addition: "<<res;
}

void sub(int a, int b){
int res;
res=a-b;
cout<<"Subtraction: "<<res;
}

void mul(int a, int b){
int res;
res=a*b;
cout<<"Multiplication: "<<res;
}

void divi(int a, int b){
int res;
res=a/b;
cout<<"Division: "<<res;
}






