#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<long long> A(N);
    for (int i = 0; i < N; i++)
        {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    while (Q--)
    {
        long long X;
        cin >> X;

        if (binary_search(A.begin(), A.end(), X))
        {
            cout << "found\n";
        } else
        {
            cout << "not found\n";
        }
    }

    return 0;
}

