#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2);
main()
{
    int n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "GCD: " << calculateGCD(n1, n2) << endl;
    cout << "LCM: " << calculateLCM(n1, n2);
}

int calculateGCD(int number1, int number2)
{
    while (number2 != 0)
    {
        int temp = number2;
        number2 = number1 % number2;
        number1 = temp;
    }
    return number1;
}

int calculateLCM(int number1, int number2)
{
    return (number1 * number2) / calculateGCD(number1, number2);
}