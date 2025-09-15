#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {
    double N;
    cin >> N;

    int integerPart = (int)N;
    double decimalPart = N - integerPart;

    if(decimalPart == 0.0) {
        cout << "int " << integerPart << "\n";
    } else {
        cout << "float " << integerPart << " " << fixed << setprecision(10) << decimalPart << "\n";
    }

    return 0;
}
