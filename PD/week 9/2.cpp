#include<iostream>

using namespace std;

main()
{
    int length;
    cout << "Enter how many words you want to enter: ";
    cin >> length;

    string word[length];
    for (int i = 0; i < length; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> word[i];
    }
    
    char findLetter;
    cout << "Enter the letter you want to count: ";
    cin >> findLetter;

    int count = 0;
    for (int i = 0; i < length; i++)
    {
        string currentWord = word[i]; 
        for (int j = 0; j < currentWord.length(); j++)
        {
            if (currentWord[j] == findLetter)
                count++;
        }
    }
    cout << findLetter << " shows up " << count << " times in the data.";

}
