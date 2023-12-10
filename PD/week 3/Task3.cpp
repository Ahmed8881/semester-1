#include <iostream>
using namespace std;
main()
{
	float n;
	float x;
	float y;
	float z;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>> n;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>> x;
	cout<<"Enter Time (s): ";
	cin>> y;
	z = n + (x*y);
	cout<<"Final Velocity (m/s): "<<z;
	
}
