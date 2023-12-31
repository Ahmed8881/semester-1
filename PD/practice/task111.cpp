#include <iostream>
#include <string>
using namespace std;
string checkPointPosition(int h, int x, int y);
main() 
{
	cout << "Enter height: ";
    	int h;
	cin >> h;
	
	cout << "Enter x coordinate: ";
	int x;    
	cin >> x;

    	cout << "Enter y coordinate: ";
    	int y;
	cin >> y;
    	
	string result = checkPointPosition(h, x, y);
    	cout << result;
}

string checkPointPosition(int h, int x, int y){ 
string condition;

	if((x >= 0 && x <= 3 * h) && (y == 0 || y == h||y == 2*h|| y==3*h|| y == 4 *h)) 
	condition= "Border";

	if(x > 0 && x < 2 * h && y > 0 && y < 4 * h) 
        condition= "Inside";
 
else 
        condition="Outside";

	return condition;
}