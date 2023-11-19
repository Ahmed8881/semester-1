#include<iostream>
using namespace std;
main(){
void printStars(int row);
cout<<"Enter desired number of rows: ";
int rowsize;
cin>>rowsize;
printStars(rowsize);
}
void printStars(int rowsize)
{
for(int row=rowsize; row>=1;row-- )
{
for(int column=row; column>=1;column--){
    cout<<"*";
}
    cout<<" "<<endl;
}
}