#include <bits/stdc++.h>
using namespace std;
int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    string S;
    cin >> S;

    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key      = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    unordered_map<char,char> mp;

    if (Q == 1)
        {

        for (int i = 0; i < original.size(); i++)
            mp[original[i]] = key[i];
    }
    else
        {

        for (int i = 0; i < original.size(); i++)
            mp[key[i]] = original[i];
    }

    for (char &c : S)
        {
        c = mp[c];
    }

    cout << S;
    return 0;
}

