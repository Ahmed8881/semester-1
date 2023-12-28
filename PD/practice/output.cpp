#include<iostream>
using namespace std;
  void swapThemByRef(int &num1, int &num2);
 void swapThemByVal(int num1, int num2);


 main()
 {
    int i = 10, j = 20;
    swapThemByVal(i, j);
    cout << i << "  " << j << endl;
    swapThemByRef(i, j);
    cout << i << "  " << j << endl;
 }
 void swapThemByVal(int num1, int num2)
 {
    int temp = num1;
    num1 = num2;
    num2 = temp;
 }
  void swapThemByRef(int &num1, int &num2)
 {
    int temp = num1;
    num1 = num2;
    num2 = temp;
 }