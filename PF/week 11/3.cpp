#include <iostream>
using namespace std;
int printSum(int matrix[][3],int size);

main(){
cout<<"Enter row size: ";
int size;
cin>>size;
 
 int matrix[size][3];

 cout<<"Enter the elements of matrix: "<<endl;
 for(int i=0 ;i<size;i++){
    for(int j=0; j<size;j++){
        cout<<"Enter element at position  [" << i << "]"<<"["<<j<<"]";
        cin>>matrix[i][j];
}
}

int output= printSum(matrix,size);
cout<<"The sum of elements in the matrix is "<<output;
}

int printSum(int matrix[][3],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<3;j++){
            sum+=matrix[i][j];
        }
    }
}