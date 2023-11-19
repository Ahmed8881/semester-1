#include <iostream>
using namespace std;
void insertArrayInMiddle(int firstArray[], int size1, int secondArray[], int size2);
main()
{
    int n1;
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter " << n1 << " elements for the first array, one per line:" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
        int n2;
    cout << "Enter the number of elements for the second array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter " << n2 << " elements for the second array, one per line:" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    insertArrayInMiddle(arr1,n1,arr2,n2);
}

void insertArrayInMiddle(int firstArray[], int size1, int secondArray[], int size2){
    cout<<"Resulting array: ["<<firstArray[0]<<", ";
    for(int i=0;i<size2;i++){
        cout<<secondArray[i]<<", ";
    }
    cout<<firstArray[1]<<"]";
}