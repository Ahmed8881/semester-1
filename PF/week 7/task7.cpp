#include <iostream>
#include <iomanip>

using namespace std;

main() {
    int n, num;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    cout << "Enter numbers count: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter a number: ";
        cin >> num;
        if (num < 200) {
            p1++;
        } else if (num < 400) {
            p2++;
        } else if (num < 600) {
            p3++;
        } else if (num < 800) {
            p4++;
        } else {
            p5++;
        }
    }
cout<< p1<<p2<<p3<<p4<<p5;
    float total = p1 + p2 + p3 + p4 + p5;
    
	float percentage_p1 = (p1 / total) * 100;
   	 float percentage_p2 = (p2 / total) * 100;
    float percentage_p3 = (p3 / total) * 100;
    float percentage_p4 = (p4 / total) * 100;
    float percentage_p5 = (p5 / total) * 100;

    cout << fixed << setprecision(2) << percentage_p1 << "%" << endl;
    cout << fixed << setprecision(2) << percentage_p2 << "%" << endl;
    cout << fixed << setprecision(2) << percentage_p3 << "%" << endl;
    cout << fixed << setprecision(2) << percentage_p4 << "%" << endl;
    cout << fixed << setprecision(2) << percentage_p5 << "%" << endl;
}
