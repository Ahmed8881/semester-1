#include<iostream>
using namespace std;
main(){
	cout<<"Number of Minutes: ";
	int min;
	cin>>min;
	cout<<"Frames per Second: ";
	float frames;
	cin>>frames;
	float total;
	total=(frames*60)*min;
	cout<<"Total Number of Frames: "<<total;


}