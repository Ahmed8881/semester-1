#include<iostream>
using namespace std;
void printStars(int row);
void printStars1(int row);
main(){
void printStars(int row);
cout<<"Enter desired number of rows: ";
int rowsize;
cin>>rowsize;
 printStars1(rowsize);
printStars(rowsize);
}

void printStars1(int rowsize)
{
for(int row=1; row<=rowsize;row++ )
{
for(int column=row; column<=row; column++){
    cout<<"* ";
}
for(int j=rowsize; j>row; j--)
    cout<<""<<endl;
}
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