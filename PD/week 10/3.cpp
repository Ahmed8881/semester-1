#include <iostream>

using namespace std;

main()
{
    int arrLength;
    cout << "Enter the length of the array: ";
    cin >> arrLength;
    
    cout << "Enter the elements of the array:" << endl;
    
    int arrElement[arrLength];
    for (int i = 0; i < arrLength; i++)
        cin >> arrElement[i];
    
    int cycleLength;
    cout << "Enter the length of the cycle: ";
    cin >> cycleLength;
    
    bool flag = false;
    if (cycleLength > arrLength)
        flag = true;
    else
    {
        for (int i = 0; i < cycleLength; i++)
        {
            if (arrElement[i] == arrElement[i + cycleLength])
                flag = true;
            else
                break;
        }
    }
    cout << "Output: " <<flag;
}
