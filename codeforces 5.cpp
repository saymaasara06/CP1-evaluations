#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {
    double R;
    cin >> R;

    double pi = 3.141592653;
    double area = pi * R * R;

    cout << fixed << setprecision(9);
    cout << area << "\n";

    return 0;
}

