#include <bits/stdc++.h>
using namespace std;
void shiftZeros(vector<int> &A)
{
    int n = A.size();
    vector<int> result;

    for (int x : A)
        if (x != 0)
            result.push_back(x);

    int zeros = n - result.size();
    while (zeros--)
        result.push_back(0);

    A = result;
}

int main()
 {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    shiftZeros(A);

    for (int x : A)
        cout << x << " ";

    return 0;
}

