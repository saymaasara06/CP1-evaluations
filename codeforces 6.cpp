#include <iostream>
using namespace std;
int main()
 {
    long long N, M;
    cin >> N >> M;

    int lastDigitN = N % 10;
    int lastDigitM = M % 10;

    int sum = lastDigitN + lastDigitM;

    cout << sum << "\n";

    return 0;
}

