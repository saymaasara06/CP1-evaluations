
#include <bits/stdc++.h>
using namespace std;
int countDistinct(vector<int> &A)
{
    set<int> s;
    for (int x : A)
        s.insert(x);
    return s.size();
}

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    cout << countDistinct(A);

    return 0;
}
