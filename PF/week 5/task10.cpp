#include <iostream>

using namespace std;
string NumberToText(int number);

main() {
    int number;
    cout << "Enter a number (1-99): ";
    cin >> number;

    string text = NumberToText(number);
    cout << text;
}

string NumberToText(int number) {
    string result;

    if (number >= 20) {
        int tens = number / 10 % 10;
        if (tens == 2){
            result += "Twenty";
        }
        if (tens == 3){
            result += "Thirty";
        }
        if (tens == 4){
            result += "Forty";
        }
        if (tens == 5){
            result += "Fifty";
        }
        if (tens == 6){
            result += "Sixty";
        }
        if (tens == 7){
            result += "Seventy";
        }
        if (tens == 8){
            result += "Eighty";
        }
        if (tens == 9){
            result += "Ninety";
        }
    }

    if (number % 10 != 0) {
        int ones = number % 10;
        if (ones == 1){
            result += "One";
        }
         if (ones == 2){
            result += "Two";
        }
         if (ones == 3){
            result += "Three";
        }
         if (ones == 4){
            result += "Four";
        }
         if (ones == 5){
            result += "Five";
        }
         if (ones == 6){
            result += "Six";
        }
         if (ones == 7){
            result += "Seven";
        }
         if (ones == 8){
            result += "Eight";
        }
         if (ones == 9){
            result += "Nine";
         }

    }
    if (number >=11){
        if (number == 11){
            result = "Eleven";
        }
        if (number == 12){
            result = "Twelve";
        }
        if (number == 13){
            result = "Thirteen";
        }
        if (number == 14){
            result = "Fourteen";
        }
        if (number == 15){
            result = "Fifteen";
        }
        if (number == 16){
            result = "Sixteen";
        }
        if (number == 17){
            result = "Seventeen";
        }
        if (number == 18){
            result = "Eighteen";
        }
        if (number == 19){
            result = "Nineteen";
        }
        
    }


    return result;
}