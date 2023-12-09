#include<iostream>
using namespace std;
main()
{
cout<<"Enter the number of rows for the array: "<<endl;
int size;
cin>>size;
int matrix[size][3];
for(int i=0;i<size;i++){
    for(int j=0;j<3;j++){
    cout<<"Enter elements at position ["<<i<<"]""["<<j<<"]: ";
    cin>>matrix[i][j];
    }
}
int count=0;
for(int i=0;i<size;i++){
    for(int j=0;j<3;j++){
    if(matrix[i][j]==matrix[i+1][j] && matrix[i][j]==matrix[i+2][j]){
    count++;
    
    
    }}}

cout<<"The count of identical rows in the array is: "<<count;





}