#include<iostream>

using namespace std;

main()
{
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    cout << R"(Enter the elements of the array ("left" or "right"):)" << endl;
    string arr[length];

    int right = 90;
    int left = -90;
    int result = 0;
    int rotations = 0;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
        if (arr[i] == "right")
            result += right;
        else if (arr[i] == "left")
            result += left;
        if (result >= 360)
        {
            result -= 360;
            rotations++;
        }
    }
    cout << "Number of full rotations: " << rotations;
}
