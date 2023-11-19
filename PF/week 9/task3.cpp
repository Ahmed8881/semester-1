#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a string: ";
    getline(cin, word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        int charCode;
        if (word[i] == 'Z')
        {
            charCode = 65;
       }
        else if (word[i] == 'z')
        {
            charCode = 97;
        }
        else if (word[i]==' '){
            charCode = word[i];
        }
        else
        {
            charCode = word[i];
            charCode++;
        }
        char nextChar = charCode;
        word[i] = nextChar;
    }
    cout << "Shifted String: " << word;
}