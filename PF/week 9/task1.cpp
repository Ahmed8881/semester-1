#include<iostream>
using namespace std;
main(){
cout<<"Enter a word: ";
string word;
cin>>word;
for(int i=0;word[i]!='\0';i++){
cout<<word[i]<<" found at position "<<i<<endl;
}
}




