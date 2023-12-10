#include <iostream>
using namespace std;
main()
{
	float n;
	float w;
	float h;
	cout<<"Number of square meters you can paint: ";
	cin>> n;
	cout<<"Width of the single wall (in meters): ";
	cin>> w;
	cout<<"Height of the single wall (in meters): ";
	cin>> h;
	int result;
	result = n/(w*h);
	cout<<"Number of walls you can paint: "<<result;
	
	
}
