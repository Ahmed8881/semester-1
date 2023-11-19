#include<iostream>
using namespace std;
void result(int score);
main(){
	cout<<"Enter your score: ";
	int score;
	cin>>score;
	result(score);

}

void result(int s){
if(s>50){
	cout<<"Pass";
}

if(s<=50){
	cout<<"Fail";
}



}