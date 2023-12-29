#include<iostream>
using namespace std;
bool isUpperTriangle(int arr[3][3],int size);

main(){
    int size=3;
    int arr[3][3]={{1,0,0},
                    {0,0,0},
                    {0,0,0},};
                    
   if(isUpperTriangle(arr,size)){
         cout<<"it is upper triangle";
    }
    else{
         cout<<"it is not upper triangle";
   }                
                    
                    
                    
                    }
bool isUpperTriangle(int arr[3][3],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i!=j && i>j){
                if(arr[i][j]!=0){
                    return false;
                }
            }
        }
   
 }
return true;
}