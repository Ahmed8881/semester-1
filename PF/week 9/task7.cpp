#include<iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size);
main(){
        int n;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> n;
    double resistance[n];

    cout << "Enter the resistance values (in ohms) of the " << n << " resistors, one per line:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> resistance[i];
    }
    cout<<"The total resistance of the series circuit is "<<calculateTotalResistance(resistance,n)<<" ohms.";
}
double calculateTotalResistance(double resistance[], int size){
    double sum =0;
    for (int i =0;i<size;i++){
        sum += resistance[i];
    }
    return sum;
}
