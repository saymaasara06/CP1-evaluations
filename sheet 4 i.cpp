#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string S;
    cin >> S;

    string revS = S;
    reverse(revS.begin(), revS.end());

    if (S == revS)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

