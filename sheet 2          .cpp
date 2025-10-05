//problem U
#include <iostream>
using namespace std;
int sumOfDigits(int x)
 {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main()
 {
    int N, A, B;
    cin >> N >> A >> B;

    long long total = 0;

    for (int i = 1; i <= N; i++)
        {
        int s = sumOfDigits(i);
        if (s >= A && s <= B)
        {
            total += i;
        }
    }

    cout << total << endl;
    return 0;
}

