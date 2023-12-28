#include<iostream>
using namespace std;

main(){
  int num = 5;//address of p is 001 and of num is 002
  int *p = &num;
  cout<<p<<endl;              //adress
  cout<<*p<<endl;                //5
  cout<<num<<endl;         //5
  cout<<&num<<endl;     //address
  cout<<&p<<endl;         
}