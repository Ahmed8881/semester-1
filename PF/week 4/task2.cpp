#include<iostream>
using namespace std;
void ft (float inches) ;
main(){
	cout<<"Enter the measurement in inches: ";
 	float inches;
 	cin>>inches;
	ft(inches);
}
void ft(float inches){
	float ft;
	ft=inches/12;
	cout<<"Equivalent in feet: "<<ft;


}
