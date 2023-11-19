#include<iostream>
using namespace std;
main()
{
    int elements;
    string res;

    cout << "Enter the number of elements: ";
    cin >> elements;

    int numbers[elements];

    cout << "Enter " << elements << " numbers, one per line:" << endl;    

    int count = 0;
    for (int i = 0; i < elements; i++)
    {
        cin >> numbers[i];
        count ++;
    }
    for (int i = count; i != 0; i --)
    {
        if (count != 0)
            res += to_string(numbers[i-1]) + " ";
        else
            res += to_string(numbers[i-1]);
    }

    cout << "Numbers in reverse order: "<< res;

}

