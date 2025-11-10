
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
        {
        int N;
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        long long ans = LLONG_MAX;
        for (int i = 0; i < N; i++)
            {
            for (int j = i + 1; j < N; j++)
            {
                long long value = A[i] + A[j] + (j - i);
                ans = min(ans, value);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
