#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    string S;
    cin >> S;

    int ans = 1;
    for (int i = 1; i < N; i++) {
        if (S[i] != S[i - 1]) {
            ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}

