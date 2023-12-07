#include<iostream>
using namespace std;
main(){
        char matrix[5][5]= {{'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'},
    };
        cout<<"Enter coordinates to fire torpedo (e.d., A1,B3,E5): ";
        string coordinate;
        cin>>coordinate;

int character = coordinate[0] - 65;
    int num = coordinate[1];
    num = num - 49;
    string result;
if (matrix[character][(num)] == '.')
        result = "splash";
else if (matrix[character][num] == '*')
        result = "BOOM";
    cout << "Result: " << result;

}


