#include <iostream>
using namespace std;
main()
{
	float vegprice;
	float fruprice;
	float vegkg;
	float frukg;
	float total;
	float earn;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>> vegprice;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>> fruprice;
	cout<<"Enter total kilograms of vegetables: ";
	cin>> vegkg;
	cout<<"Enter total kilograms of fruits: ";
	cin>> frukg;
	total= (vegprice*vegkg)+(fruprice*frukg);
	earn= total/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<earn;
	
}
