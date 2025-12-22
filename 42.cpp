#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin >> N;

    long long ans = (sqrtl(1 + 8.0L * N) - 1) / 2;
    cout << ans << endl;

    return 0;
}
