#include <iostream>
#include <windows.h>
using namespace std;
float volume (float l,float w, float h, string unit);
main(){

cout<<"Enter the lenght of the pyramid (in meters): ";
float l;
cin>>l;

cout<<"Enter the width of the pyramid (in meters): ";
float w;
cin>>w;

cout<<"Enter the height of pyramid (in meters): ";
float h;
cin>>h;

cout<<"Enter the desired output unit (millimeters, centimeters,meters,kilometers): ";
string unit;
cin>>unit;

float result;

float output=volume(l,w,h,unit);
cout<<"The volume of the pyramid is: "<<output<<" cubic "<<unit;
}

float volume (float l,float w, float h, string unit)
{
	float result=(l*w*h)/3;
	if(unit=="millimeters"){
result=result*10000000000;
}
if(unit=="centimeters"){
result=result*1000000;
}
if(unit=="kilometers"){
result=result/1000000000;
}
return result;
}