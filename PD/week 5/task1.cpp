#include <iostream>
using namespace std;
int value1=10;
int value2=20;
int sum();	

main(){
int x= value1;
value1=100;
x=20;
value2=sum();
cout<<value1<<"\t"<<value2;
sum();
}

int sum(){

	value1=40;
	return value1 = value2;
}








