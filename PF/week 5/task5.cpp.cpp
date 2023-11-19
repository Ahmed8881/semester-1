#include <iostream>
#include <cmath>
void eqCal(int a, int b, int c);
using namespace std;
main()
{
    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    eqCal(a, b, c);
}

void eqCal(int a, int b, int c)
{
    int determinant = (b * b) - 4 * a * c;
    if (determinant > 0)
    {
        double ans1 = (-b + sqrt(determinant)) / (2 * a);
        double ans2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "Solutions: x = " << ans1 << " and x = " << ans2;
    }
    else if (determinant == 0)
    {
        double ans = -b / (2 * a);
        cout << "Solution: x = " << ans;
    }
    else
    {
        double ans1 = (sqrt(-(determinant)) / (2 * a));
        double ans_1 = (-b / (2 * a));
        cout << "Complex Solutions: x = " << ans_1 << " + " << ans1 << "i and x = " << ans_1 << " - " << ans1 << "i";
    }
}