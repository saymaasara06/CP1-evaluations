#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> A(N, vector<long long>(M));

    for (int i = 0; i < N; i++)
        {
        for (int j = 0; j < M; j++)
         {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; i++)
        {
        for (int j = M - 1; j >= 0; j--)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

