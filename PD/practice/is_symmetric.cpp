#include<iostream>
using namespace std;
bool is_symmetric(int arr[3][3],int size);

main(){
    int arr[3][3]={{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
int size=3;
if(is_symmetric(arr,size)){
    cout<<"it is symmetric";
}
else{
    cout<<"it is not symmetric";
}}
bool is_symmetric(int arr[3][3],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i][j]==arr[j][i]){
                return true;
            }
            else{
                return false;
        }

    }
}
}