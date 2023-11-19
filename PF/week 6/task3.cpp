#include<iostream>
using namespace std;
float perimeter(float value, char shape);
main(){

	cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
	char shape;
	cin>>shape;

	cout<<"Enter the value: ";
	float value;
	cin>>value;

	float result=perimeter(value, shape);
	cout<<"The perimeter is: "<<result;


}
float perimeter(float value, char shape){
	char name=shape;
	float p;
if(name=='s'){
	p=(4*value);
}
	
if(name=='c'){
	p=(6.28*value);
}
	
if(name=='t'){
	p=(3*value);
}
	
if(name=='h'){
	p=(6*value);
}
	return p;

}