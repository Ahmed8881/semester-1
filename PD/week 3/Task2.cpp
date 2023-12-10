#include <iostream>
using namespace std;
main()
{
	float x;
	float y;
	float z;
	cout<<"Number of Minutes: ";
	cin>> x;
	cout<<"Frames per Second: ";
	cin>> y;
	z = (x*60)*y;
	cout<<"Total Number of Frames: "<<z;

}
	