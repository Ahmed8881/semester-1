#include <iostream>
using namespace std;
main(){
	cout<<"Enter the current world population: ";
	int pop;
	cin>>pop;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	int birth;
	cin>>birth;
	int total;
	total=(birth*12)*30+pop;
	cout<<"The population in three decades will be: " <<total;
}