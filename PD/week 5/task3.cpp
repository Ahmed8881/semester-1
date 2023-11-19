#include<iostream>
using namespace std;
float taxCalculator(char code,float price);
main(){
cout<<"Enter the vehicle type code (M,E,S,V,T): ";
char code;
cin>>code;

cout<<"Enter the price of vehicle: $";
float price; 
cin>>price; 
double output;
output=taxCalculator(code,price);

cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is $"<<output;

}
float taxCalculator(char code,float price){
int rate;


if(code=='M' ){
rate=6;

}
if(code=='E'){
rate=8;
}
if(code=='S'){
rate=10;
}
if(code=='V'){
rate=12;
}
if(code=='T'){
rate=15;
}
int tax=price*(rate*0.01);
int finalp=price+(tax);
return finalp;}