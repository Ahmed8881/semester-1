#include <iostream>
using namespace std;
int  greaterNumber(int n1,int n2);
int res;
main(){

cout<<"Enter the first number: ";
	int n1;
	cin>>n1;

	cout<<"Enter the second number: ";
	int n2;
	cin>>n2;
	int resu;	
	resu= greaterNumber(n1,n2);
	cout<<resu;

}
int greaterNumber(int n1,int n2){
if(n1>n2){
res=1;
}
else{
res=0;
}

return res;


}