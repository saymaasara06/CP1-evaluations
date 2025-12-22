#include <iostream>
using namespace std;
int main()
{
    long long A, B;
    cin >> A >> B;

    long long L = min(A, B);
    long long R = max(A, B);


    long long total = (L + R) * (R - L + 1) / 2;
    cout << total << endl;


    long long first_even = (L % 2 == 0) ? L : L + 1;
    long long last_even  = (R % 2 == 0) ? R : R - 1;

    long long even_sum = 0;
    if (first_even <= last_even)
        {
        long long count = ((last_even - first_even) / 2) + 1;
        even_sum = count * (first_even + last_even) / 2;
    }

    cout << even_sum << endl;


    long long odd_sum = total - even_sum;
    cout << odd_sum << endl;

    return 0;
}
