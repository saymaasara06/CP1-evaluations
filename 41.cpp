
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin >> N;

    bool first = true;

    for (long long i = 2; i * i <= N; i++)
        {
        if (N % i == 0) {
            int cnt = 0;
            while (N % i == 0) {
                N /= i;
                cnt++;
            }
            if (!first) cout << "*";
            cout << "(" << i << "^" << cnt << ")";
            first = false;
        }
    }

    if (N > 1)
        {
        if (!first) cout << "*";
        cout << "(" << N << "^1)";
    }

    return 0;
}
