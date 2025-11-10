#include <bits/stdc++.h>
using namespace std;
int countDivisionsBy2(long long x)
{
    int count = 0;
    while (x % 2 == 0)
        {
        x /= 2;
        count++;
    }
    return count;
}

int main()
{
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int minOperations = INT_MAX;
    for (int i = 0; i < N; i++)
        {
        int operations = countDivisionsBy2(A[i]);
        minOperations = min(minOperations, operations);
    }

    cout << minOperations << endl;

    return 0;
}

