#include <iostream>
using namespace std;
int Special(int size, int arr[]);
main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Special value: " << Special(size, arr);
}

int Special(int size, int arr[])
{
    int count = 0;
    for (int x = 0; x <= size; x++)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] >= x)
            {
                count++;
            }
        }
        if (count == x)
        {
            return x;
        }
        count = 0;
    }
    return -1;
}