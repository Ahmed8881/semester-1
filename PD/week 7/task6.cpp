#include<iostream>
using namespace std;
int primorial(int num);
main(){
    cout <<"Enter Number: ";
    int num;
    cin >> num;
    int number=primorial(num);
cout << number;
}
int is_prime(int num) {
    if (num <= 1)
        return 0;
    if (num <= 3)
        return 1;
    if (num % 2 == 0 || num % 3 == 0)
        return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int primorial(int num) {
    int result = 1;
    int count = 0;
    int current_number = 2;

    while (count < num) {
        if (is_prime(current_number)) {
            result *= current_number;
            count++;
        }
        current_number++;
    }

    return result;
}s