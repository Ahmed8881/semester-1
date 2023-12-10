#include <iostream>
using namespace std;
main()
{
	float i;
	float p;
	int y;
	cout<<"Enter Imposter Count: ";
	cin>> i;
	cout<<"Enter Player Count: ";
	cin>> p;
	y = 100*(i/p);
	cout<<"Chance of being an imposter: "<<y<<"%";
	
}
	