#include<iostream>
using namespace std;
main(){
	cout<<"Enter the movie name: ";
	string movie;
	cin>>movie;

	cout<<"Enter the adult ticket price: $";
	float price;
	cin>>price;

	cout<<"Enter the child ticket price: $";
	float price2;
	cin>>price2;

	cout<<"Enter the number of adult tickets sold: ";
	float sold;
	cin>>sold;

	cout<<"Enter the number of child tickets sold: ";
	float sold2;
	cin>>sold2;

	cout<<"Enter the percentage of the amount to be donated to charity: ";
	float charity;
	cin>>charity;

	cout<<endl;
	cout<<"Movie: "<< movie <<endl;

	float total;
	total=(price*sold)+(price2*sold2);
	cout<<"Total amount generated from ticket sales: $"<<total<<endl;

	float dollars;
	dollars=total*(charity/100);
	cout<<"Donation to charity ("<< charity  << "%): $" << dollars <<endl;

	float net;
	net=total-dollars;
	cout<< "Remaining amount after donation: $"<< net;



}