#include<iostream>
using namespace std;
void timeTravel(int h, int m);
main(){
	int h,m;
	cout << "Enter Hours: ";
	cin >> h;
	cout << "Enter Minutes: ";
	cin >> m;
	timeTravel(h,m);
	
}
void timeTravel(int h, int m){
	m=m+15;

	if(m>59){
	m=m-60;
	h=h+1;
}
	if (h >= 23){
	h=0;
}
	cout << h <<":"<<m;
}