#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    if (N <= 0) {
        cout << "NO";
        return 0;
    }

    while (N % 2 == 0) {
        N /= 2;
    }

    if (N == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
