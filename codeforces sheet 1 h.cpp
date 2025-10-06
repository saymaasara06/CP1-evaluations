#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
    double A, B;
    cin >> A >> B;

    double division = A / B;

    cout << "floor " << (int)A << " / " << (int)B << " = " << (int)floor(division) << endl;
    cout << "ceil " << (int)A << " / " << (int)B << " = " << (int)ceil(division) << endl;
    cout << "round " << (int)A << " / " << (int)B << " = " << (int)round(division) << endl;

    return 0;
}

