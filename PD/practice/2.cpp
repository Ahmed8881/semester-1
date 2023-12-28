 #include<iostream>
using namespace std;
main(){
    int rows=5;
    int columns=5;
int cars[rows][columns] ={
                {10, 7, 12, 10, 4},
                {18, 11, 15, 17, 2},
                {23, 19, 12, 16, 14},
                {7, 12, 16, 0, 2},
                {3, 5, 6, 2, 1}};
int max=cars[0][0];
for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++){
        if(max<cars[i][j]){
            max=cars[i][j];
        }
    }
}
cout<<max;
}