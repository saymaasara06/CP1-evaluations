#include <bits/stdc++.h>
using namespace std;
int countVowels(string &s, int i)
{
    if (i == s.size())
        return 0;

    char c = tolower(s[i]);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1 + countVowels(s, i + 1);
    else
        return countVowels(s, i + 1);
}

int main()
{
    string s;
    getline(cin, s);

    cout << countVowels(s, 0) << endl;
    return 0;
}
