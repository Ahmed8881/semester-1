#include <iostream>
using namespace std;
main()
{
    int size = 10;
    int arr[size];
    cout << "Enter the weights of the 10 packages: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        min = arr[i];
        for (int j = i; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                int newValue = arr[i];
                arr[i] = min;
                arr[j] = newValue;
            }
        }
    }
    cout << "Sorted array in ascending order: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
}