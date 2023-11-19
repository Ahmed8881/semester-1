#include<iostream>
using namespace std;
void Vote(int age);
main(){
	cout<<"Enter your age: ";
	int age;
	cin>>age;
	Vote(age);
}

void Vote(int age){
if(age>=18){
	cout<<"You are eligible to vote.";
}
if(age<18){
	cout<<"You are not eligible to vote.";
}}

