#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    while (N--)
        {
        string S, T;
        cin >> S >> T;

        string result = "";
        int m = max(S.size(), T.size());

        for (int i = 0; i < m; i++)
            {
            if (i < S.size()) result += S[i];
            if (i < T.size()) result += T[i];
           }

        cout << result << "\n";
    }

    return 0;
}
