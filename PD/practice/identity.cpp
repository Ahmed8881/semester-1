#include<iostream>
using namespace std;
bool isIdentityrest(int arr[3][3],int size);
bool isIdentitydiagonals(int arr[3][3],int size);

main(){
    int size=3;
int arr[3][3]={{1,0,0},
                {0,1,0},
                {0,0,1},};

if(isIdentitydiagonals(arr,size)&&isIdentityrest(arr,size)){
    cout<<"it is identity matrix";
}
else{
    cout<<"it is not identity matrix";



}}
bool isIdentitydiagonals(int arr[3][3],int size){
    for(int i=0;i<size;i++){
        if(arr[i][i]!=1){
            return false;
        }
    }
}
bool isIdentityrest(int arr[3][3],int size){
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(i!=j){
         if(arr[i][j]!=0){
            return false;
        }
    }
}
}
return true;
}