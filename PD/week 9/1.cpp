#include <iostream>
using namespace std;
main(){
int function(int sat,int number[]);
cout<<"Enter the number of Saturdays: ";
int sat;
cin>>sat;
int number[sat];
for(int i=0;i<sat;i++){
cout<<"Enter miles run for Saturday "<<i+1<<":";
cin>>number[i];
}
int output= function( sat, number);
cout<<"Total progress days: "<<output;
}
int function(int sat,int number[]){
int count=0;
for(int i=0;i+1<sat;i++){
if(number[i]<number[i+1]){
count++;
}
}
return count;
}
