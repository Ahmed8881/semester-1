#include <iostream>
using namespace std;
int frequencyChecker(int, int);
main()
{
    int n, digit;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the digit to check: ";
    cin >> digit;
    int frequency = frequencyChecker(n, digit);
    cout << "Frequency: " << frequency;
}
int frequencyChecker(int number, int digit)
{
    int frequency = 0;
    int obtained_Digit = 0;
    while (number != 0)
    {
        obtained_Digit = number % 10;
        number = number / 10;
        if (obtained_Digit == digit)
        {
            frequency=frequency+1;
        }
    }
    return frequency;
}