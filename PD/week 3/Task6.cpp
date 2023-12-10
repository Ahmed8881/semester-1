#include <iostream>
using namespace std;
main()
{
	float size;
	float cost;
	float area;
	float costp;
	float costpsq;
	cout<<"Enter the size of the fertilizer bag in pounds: ";
	cin>> size;
	cout<<"Enter the cost of the bag: $";
	cin>> cost;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>> area;
	costp = cost/size;
	costpsq = cost/area;
	cout<<"Cost of fertilizer per pound: $"<<costp<<endl;
	cout<<"Cost of fertilizing per square foot: $"<<costpsq;
	
}
	