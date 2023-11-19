#include<iostream>
using namespace std;
string checkAlphabetCase(string a);
main(){
	string a,b;
	cout << "Enter a character (A/a): ";
	cin >> a;
	b=checkAlphabetCase(a);
	cout << b;
}
string checkAlphabetCase(string a){
	if(a=="A"){
	return "You have entered Capital A";
}
	if(a=="a"){
	return "You have entered small a";
}
}