#include<iostream>
using namespace std;
void amplify(int number);
main(){
cout<<"Enter the number to Amplify: ";
int num;
cin>>num;
amplify(num);
}
void amplify(int number){
   
for(int x=1 ; x<=number; x++){
int y;
y=x;
if(x%4==0){
y=x*10;

}
else{
y=y;    
}
cout<<y;
if(x<number){
cout<<",";
}
}
}