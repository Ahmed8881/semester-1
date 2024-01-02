#include <iostream>
using namespace std;
void extendedGcd(int a, int b, int& bezout_s, int& bezout_t); 


int main()
 {
    int bezout_s, bezout_t;
    extendedGcd(3, 7, bezout_s, bezout_t);
    cout << "Bezout coefficients are " << bezout_s << " and " << bezout_t << endl;
    return 0;
}

void extendedGcd(int a, int b, int& bezout_s, int& bezout_t) {
    int r1 = a, r = b;
    int s1 = 1, s = 0;
    int s2 = 0, t = 1;

    while (r != 0) {
        int quotient = r1 / r;
        int temp = r1;
        r1 = r;
        r = temp - quotient * r;

        temp = s1;
        s1 = s;
        s = temp - quotient * s;

        temp = s2;
        s2 = t;
        t = temp - quotient * t;
    }

    bezout_s = s1;
    bezout_t = s2;
}

///                                     explanation of function



//The provided C++ code is an implementation of the Extended Euclidean Algorithm, which is used to find the greatest common divisor (GCD) of two numbers, a and b, and also find the coefficients bezout_s and bezout_t (Bezout's coefficients) such that a*bezout_s + b*bezout_t = gcd(a, b).
//
//The function extendedGcd takes five parameters: two integers a and b, and three integer references bezout_s, bezout_t, and gcd. The integers a and b are the numbers for which we want to find the GCD and Bezout's coefficients. The integer references bezout_s and bezout_t are used to store the Bezout's coefficients.
//
//The function initializes two sequences of numbers: r1, r, s1, s, s2, and t. The r sequence (r1 and r) is used to store the remainders of the division of a by b, and the s and t sequences (s1, s, s2, and t) are used to store the coefficients of a and b in the linear combination that gives the GCD.
//
//The function then enters a loop that continues until r (the remainder of the division of a by b) is not zero. In each iteration of the loop, the function calculates the quotient of r1 by r, updates the r, s, and t sequences using the calculated quotient, and updates the r1, s1, and s2 values with the old r, s, and t values.
//
//After the loop ends, the function sets bezout_s and bezout_t to s1 and s2, which are the Bezout's coefficients of a and b. These coefficients satisfy the equation a*bezout_s + b*bezout_t = gcd(a, b).
