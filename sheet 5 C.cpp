
#include <iostream>
#include <string>
using namespace std;
string toBinary(int n)
 {
    string s = "";
    if (n == 0) return "0";
    while (n > 0) {
        s = char('0' + (n % 2)) + s;
        n /= 2;
    }
    return s;
}

bool isPalindrome(string s)
{
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1 && isPalindrome(toBinary(n)))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
