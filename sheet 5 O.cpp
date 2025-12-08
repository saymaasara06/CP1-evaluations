
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

bool isPalindrome(int x)
 {
    int original = x, rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev == original;
}

int countDivisors(int x)
{
    int cnt = 0;
    for (int i = 1; i <= x; i++)
        if (x % i == 0) cnt++;
    return cnt;
}

int getMaxNumber(vector<int> &A)
{
    return *max_element(A.begin(), A.end());
}

int getMinNumber(vector<int> &A)
{
    return *min_element(A.begin(), A.end());
}

int countPrimes(vector<int> &A)
{
    int c = 0;
    for (int x : A)
        if (isPrime(x)) c++;
    return c;
}

int countPalindromes(vector<int> &A)
{
    int c = 0;
    for (int x : A)
        if (isPalindrome(x)) c++;
    return c;
}

int maxDivisorNumber(vector<int> &A)
 {
    int best = -1, bestDiv = -1;

    for (int x : A) {
        int d = countDivisors(x);
        if (d > bestDiv || (d == bestDiv && x > best))
            {
            bestDiv = d;
            best = x;
        }
    }
    return best;
}

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    cout << "The maximum number : " << getMaxNumber(A) << "\n";
    cout << "The minimum number : " << getMinNumber(A) << "\n";
    cout << "The number of prime numbers : " << countPrimes(A) << "\n";
    cout << "The number of palindrome numbers : " << countPalindromes(A) << "\n";
    cout << "The number that has the maximum number of divisors : " << maxDivisorNumber(A);

    return 0;
}
