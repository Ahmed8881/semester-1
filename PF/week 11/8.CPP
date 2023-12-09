#include<iostream>
using namespace std;
main(){
cout<<"Enter row size: ";
int size;
cin>>size;
int matrix[size][5];
cout<<"Enter the elements of matrix: ";
for(int i=0;i<size;i++){
    for(int j=0;j<5;j++){
        cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
    }
cout<<endl;
}
cout<<"Original Matrix: "<<endl;
 for (int i = 0; i < size; i++) {
        for (int j = 0; j < 5; ++j) {cout << matrix[i][j] << " ";}
    cout <<endl;}

}
void finalmatrix(int matrix[][5],int size){
cout<<"Matrix after largest column moved to first:"<<endl;
    int largestColumn = 0;
    int largestSum = 0;
for (int j = 0; j < 5; j++) {int currentSum = 0;for (int i = 0; i < size; i++) {currentSum += matrix[i][j];}
if (currentSum > largestSum) {largestSum = currentSum;largestColumn = j;}}
    // Swap 
    for (int i = 0; i < size; ++i) {swap(matrix[i][0], matrix[i][largestColumn]);}










}
