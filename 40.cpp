
#include <iostream>
using namespace std;
int main()
{
    long long A, B, X;
    cin >> A >> B >> X;

    long long L = min(A, B);
    long long R = max(A, B);

    long long first = ((L + X - 1) / X) * X;
    long long last = (R / X) * X;

    if (first > last) {
        cout << 0 << endl;
    } else {
        long long count = ((last - first) / X) + 1;
        long long sum = count * (first + last) / 2;
        cout << sum << endl;
    }

    return 0;
}
