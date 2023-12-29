#include<iostream>
using namespace std;
bool is_diagonol(int arr[3][3],int size);
main(){
    int size=3;
    int arr[3][3]={{1,0,0},
                    {0,0,0},
                    {0,0,0},};

if(is_diagonol(arr,size)){
    cout<<"it is diagonal";
}
else{
    cout<<"it is not diagonal";
}
}
bool is_diagonol(int arr[3][3],int size){
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