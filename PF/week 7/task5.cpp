#include<iostream>
using namespace std;
int digitSum(int num);
main(){
cout<<"Enter a num: ";
int num;
cin>>num;
int result= digitSum( num);
cout<<"Sum of digits: "<<result;




}
int digitSum(int num){
int a,b,c;
while(num!=0){
a=num%10;

 num=num/10;
 b=num%10;
 num=num/10;
 c=num%10;
 a=a+b+c;

return a;
}

}