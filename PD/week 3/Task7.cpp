#include <iostream>
using namespace std;
main()
{
	string name;
	float adult;
	float child;
	float adusold;
	float chisold;
	float charity;
	float amugen;
	float dono;
	float remain;
	cout<<"Enter the movie name: ";
	cin>> name;
	cout<<"Enter the adult ticket price: $";
	cin>> adult;
	cout<<"Enter the child ticket price: $";
	cin>> child;
	cout<<"Enter the number of adult tickets sold: ";
	cin>> adusold;
	cout<<"Enter the number of child tickets sold: ";
	cin>> chisold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>> charity;
	amugen=(adusold*adult)+(child*chisold);
	dono=amugen*0.1;
	remain= amugen-dono;
	cout<<endl;
	cout<<"Movie: "<<name<<endl;
	cout<<"Total amount generated from ticket sales: $"<<amugen<<endl;
	cout<<"Donation to charity (10%): $"<<dono<<endl;
	cout<<"Remaining amount after donation: $"<<remain<<endl;
	
	
}
