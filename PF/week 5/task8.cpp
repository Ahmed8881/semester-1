#include<iostream>
using namespace std;
string OddishOrEvenish(int g);
main(){
	int g;
	int a;
	int b;
	int c;
	int d;
	int f;
	string h;
	int num;
	cout << "Enter a five-digit number: ";
	cin >> num;
	b=(num%10);
	num=num/10;
	a=(num%10);
	num=(num/10);
	c=(num%10);
	num=num/10;
	d=(num%10);
	num=num/10;
	f=(num%10);
	g=a+b+c+d+f;
	h=OddishOrEvenish(g);
	cout << h;
}
string OddishOrEvenish(int g){
	if(g%2!=0){
	return "Oddish";
}
	if(g%2==0){
	return "Evenish";
}
}