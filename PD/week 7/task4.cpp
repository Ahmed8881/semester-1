#include<iostream>
using namespace std;
int triangle(int number);
main(){
cout<<"Enter number of Triangle: ";
int number;
cin>>number;

 int result=triangle(number);
cout<<"Dots in the Triangle: "<<result;


}
int triangle(int number){
int sum=0;
for(int x=1; x<=number; x=x+1){
sum=x+sum;

}
return sum;
}