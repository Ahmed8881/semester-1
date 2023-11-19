#include <iostream>
#include <cmath>
using namespace std;
main(){

cout<<"Enter the distance from the base of the tree (in feet): ";
float d;
cin>>d;

cout<<"Enter the angle of elevation (in degrees): ";
float angle;
cin>>angle;
float h;
h=(d)*(tan(angle/57.2958));
cout<<"The height of the tree is: "<<h<<" feet";





}