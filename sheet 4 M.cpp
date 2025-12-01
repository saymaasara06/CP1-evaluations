#include <bits/stdc++.h>
using namespace std;
int main()
io {
    string S;
    cin >> S;

    string target = "hello";
    int j = 0;
    for (char c : S)
        {
        if (c == target[j])
        {
            j++;
        }
        if (j == target.size()) break;
    }

    if (j == target.size())
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

