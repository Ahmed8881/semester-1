#include <iostream>
using namespace std;
string checkSpeed(float speed);
main(){

cout<<"Enter the speed: ";
float speed;
cin>>speed;

string result=checkSpeed(speed);
cout<<result;
}
string checkSpeed(float speed){
string v;
if(speed<=10){
v=slow;
}

if(speed>10 && speed==50){
v=average;
}

if(speed>50 && speed==150){
v=fast;
}

if(speed>150 && speed==1000){
v=ultra-fast;
}
return v;


}
