#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long result = 1;
    result = (result * (A % 100)) % 100;
    result = (result * (B % 100)) % 100;
    result = (result * (C % 100)) % 100;
    result = (result * (D % 100)) % 100;

    printf("%02lld\n", result);

    return 0;
}
