#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.size(); )
        {
        if (i + 5 <= s.size() && s.substr(i, 5) == "EGYPT")
         {
            ans += ' ';
            i += 5;
        }
    else
        {
            ans += s[i];
            i++;
        }
    }

    cout << ans;
}

