#include<iostream>
using namespace std;
void longestTime(float h, float m);
main() {
	float h;
	float m;
	cout<<"Enter the number of hours: ";
	cin>>h;
	cout<<"Enter the number of minutes: ";
	cin>>m;
	longestTime(h,m);
	}
void longestTime(float h,float m){
		    if(h*60>m){
				cout<<h;}
		    if(m>h*60){
				cout<<m;}
			     
			
		    }
	