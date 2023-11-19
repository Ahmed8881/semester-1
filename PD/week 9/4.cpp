#include<iostream>

using namespace std;

main()
{
    int boxes;
    cout << "Enter the number of boxes: ";
    cin >> boxes;

    cout << "Enter the dimensions of the boxes (length, width, height): " << endl;
    int allBoxes = boxes * 3;         /// 3 dimensions
    
    int dimensions[allBoxes];
    for (int i = 0; i < allBoxes; i++)
        cin >> dimensions[i];        /// getting input

    int totalVolume = 0;
    int product = 1;
    for (int i = 0; i < allBoxes; i++)
    {
        product *= dimensions[i];
        if ((i + 1) % 3 == 0)   
        {
            totalVolume += product; 
            product = 1;       // value reset
        }
    }
    cout << "Total volume of all boxes: " << totalVolume;
}
