#include<iostream>
using namespace std;
main(){
	cout<<"Enter vegetable price per kilogram (in coins): ";
	float veg;
	cin>>veg;

	cout<<"Enter fruit price per kilogram (in coins): ";
	float fruits;
	cin>>fruits;

	cout<<"Enter total kilograms of vegetables: ";
	int total1;
	cin>>total1;

	cout<<"Enter total kilograms of fruits: ";
	int total2;
	cin>>total2;
	
	float earning;
	earning=(veg*total1)/1.94+(fruits*total2)/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<earning;
		






}