#include <iostream>

using namespace std;

string calculatePoolState(int V, int P1, int P2, float H)
{
    float pool = 0;
    float pipe1 = 0;
    float pipe2 = 0;
    float percent1 = 0;
    float percent2 = 0;
    float overflow = 0;
    string result = "";

    pool = (P1 + P2) * H;
    percent1 = (P1 * H) / pool * 100;
    percent2 = (P2 * H) / pool * 100;

    if (pool <= V)
    {
        cout << "The pool is " << (int)(pool / 10) << "% full. Pipe 1: " << (int)percent1 << "%. Pipe 2: " << (int)percent2 << "%.";
    }
    else
    {
        overflow = pool - V;
        cout << "For " << H << " hours, the pool overflows with " << overflow << " liters.";
    }

    return result;
}

int main()
{
    int V = 0;
    int P1 = 0;
    int P2 = 0;
    float H = 0;
    cout << "Enter volume of the pool in liters: ";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;
    cout << "Enter hours that the worker is absent: ";
    cin >> H;

    calculatePoolState(V, P1, P2, H);

    return 0;
}