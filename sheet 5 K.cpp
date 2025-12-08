#include <bits/stdc++.h>
using namespace std;
void shiftRight(vector<int> &a, int x)
 {
    int n = a.size();
    x = x % n;

    if (x == 0) return;

    vector<int> temp;

    for (int i = n - x; i < n; i++)
        temp.push_back(a[i]);

    for (int i = 0; i < n - x; i++)
        temp.push_back(a[i]);

    a = temp;
}

int main()
 {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    shiftRight(A, X);

    for (int v : A)
        cout << v << " ";

    return 0;
}

