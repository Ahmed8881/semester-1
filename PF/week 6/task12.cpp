#include<iostream>
using namespace std;
float totalIncome(string type, int rows, int columns);
main()
{
string type;
int rows,columns;
cout <<"Enter the screening type (Premiere/Normal/Discount): ";
cin >> type;
cout <<"Enter the number of rows: ";
cin >> rows;
cout <<"Enter the number of columns: ";
cin >> columns;
float income= totalIncome(type, rows, columns);
cout << income;
}
float totalIncome(string type, int rows, int columns){
    float income=rows*columns;
        if(type=="Premiere"){
            income=income*12;
        }
                if(type=="Normal"){
            income=income*7.5;
        }
                if(type=="Discount"){
            income=income*5;
        }
        return income;
}