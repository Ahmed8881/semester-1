#include <iostream>
using namespace std;
main()
{
	string name;
	float kg;
	float days;
	cout<<"Enter the Name of the Person: ";
	cin>> name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>> kg;
	days= kg*15;
	cout<<name<<" will need "<<days<<" days to lose "<<kg<<" kg of weight by following the doctor's suggestions";
	
}
