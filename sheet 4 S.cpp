#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;

    int L = 0, R = 0;
    vector<string> ans;
    string cur = "";

    for (char c : S)
        {
        cur += c;
        if (c == 'L') L++;
        else R++;

        if (L == R)
            {
            ans.push_back(cur);
            cur = "";
            L = R = 0;
        }
    }

    cout << ans.size() << "\n";
    for (auto &x : ans) cout << x << "\n";
}
