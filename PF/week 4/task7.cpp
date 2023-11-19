#include <iostream>
using namespace std;
void evenOrOdd(int num);
main(){
	cout<<"Enter a number: ";
	int num;
	cin>>num;
	evenOrOdd(num);

}
void evenOrOdd(int num){
if(num%2==0){
	cout<<"Number "<<num<<" is even";
}
if(num%2!=0){
	cout<<"Number "<<num<<" is odd";

}



}