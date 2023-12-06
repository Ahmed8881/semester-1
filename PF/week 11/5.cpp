#include<iostream>
using namespace std;
bool identity(int matrix[][3]);

main(){
cout<<"Enter the elements of the matrix: "<<endl;
int matrix[3][3];

for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
        cout<<"Enter elements at position ["<<i<<"]""["<<j<<"]: ";
    cin>>matrix[i][j];
    }
}

cout<<"The matrix you entered is:"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<matrix[i][j]<<" ";
    }
cout<<endl;
}

bool output= identity(matrix);
if(output){
    cout << "The entered matrix is an identity matrix." << endl;
}
else{
     cout << "The entered matrix is NOT an identity matrix." << endl;
}


}
bool identity(int matrix[][3]){

for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            
            if ((i != j && matrix[i][j] == 1) || (i == j && matrix[i][j] == 0)) {
                return true;
            }
        }
    }
    return false;
}

