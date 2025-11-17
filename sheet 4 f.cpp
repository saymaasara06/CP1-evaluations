
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
        {
        string S;
        cin >> S;

        int len = S.length();

        if (len <= 10) {
            cout << S << endl;
        }
         else
            {
            cout << S[0] << (len - 2) << S[len - 1] << endl;
        }
    }

    return 0;
}
