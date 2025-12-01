
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;

    while (Q--)
        {
        string cmd;
        cin >> cmd;

        if (cmd == "pop_back")
            {
            S.pop_back();
        }
        else if (cmd == "front")
         {
            cout << S.front() << "\n";
        }
        else if (cmd == "back")
         {
            cout << S.back() << "\n";
        }
        else if (cmd == "sort")
         {
            int l, r;
            cin >> l >> r;
            sort(S.begin() + (l - 1), S.begin() + r);
        }
        else if (cmd == "reverse")
        {
            int l, r;
            cin >> l >> r;
            reverse(S.begin() + (l - 1), S.begin() + r);
        }
        else if (cmd == "print")
         {
            int pos;
            cin >> pos;
            cout << S[pos - 1] << "\n";
        }
        else if (cmd == "substr")
         {
            int l, r;
            cin >> l >> r;
            cout << S.substr(l - 1, r - l + 1) << "\n";
        }
        else if (cmd == "push_back")
        {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }

    return 0;
}
