#include<iostream>
using namespace std;
void fuel(float dis);
main(){
	cout<<"Enter the distance: ";
 	float dis;
 	cin>>dis;
 	fuel(dis);


}
void fuel(float dis ){
	float f;
	f=dis*10;
	cout<<"Fuel needed: "<<f;
}