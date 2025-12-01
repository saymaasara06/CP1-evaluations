
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    long long cntE = 0, cntG = 0, cntY = 0, cntP = 0, cntT = 0;

    for (char c : s)
        {
        c = toupper(c);
        if (c == 'E') cntE++;
        else if (c == 'G') cntG++;
        else if (c == 'Y') cntY++;
        else if (c == 'P') cntP++;
        else if (c == 'T') cntT++;
    }

    cout << min({cntE, cntG, cntY, cntP, cntT}) << "\n";
    return 0;
}
