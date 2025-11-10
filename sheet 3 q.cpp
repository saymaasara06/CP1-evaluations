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
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        long long count = 1;
        long long length = 1;

        for (int i = 1; i < N; i++)
            {
            if (A[i] >= A[i-1]) {
                length++;
            } else
            {
                length = 1;
            }
            count += length;
        }

        cout << count << endl;
    }

    return 0;
}

