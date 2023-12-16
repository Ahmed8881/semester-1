#include <iostream>
using namespace std;
void bonus(int yprice,int fprice,int diff);

main()
{
	int yprice,fprice;
	int diff;
	cout << "Enter your position: ";
	cin >> yprice;
	cout << "Enter your friend's position: ";
	cin >> fprice;
	bonus(yprice,fprice,diff);
}

void bonus(int yprice,int fprice,int diff)
{
	diff = fprice - yprice;
	if (diff <= 6)
	{	cout << "true";	}
	if (diff > 6)
	{	cout << "false";	}
}