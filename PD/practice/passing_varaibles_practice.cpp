#include<iostream>
using namespace std;
void print_array(int array[],int size);

main(){
    int array[5]={1,3,4,5,2};
    print_array(array,5);
    for(int j=0;j<5;j++){
    cout<<array[j];
    }
}
void print_array(int array[],int size){
array[0]=7;
for(int i=0 ;i<size ; i++){
    
    cout<<array[i]<<" ";
}
}