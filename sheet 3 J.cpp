#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++)
        cin >> A[i];

    int minval = A[0];
    int freq = 1;

    for (int i = 1; i < N; i++)
        {
        if (A[i] < minval)
        {
            minval = A[i];
            freq = 1;
        } else if (A[i] == minval)
         {
            freq++;
        }
    }

    if (freq % 2 == 1)
        cout << "Lucky";
    else
        cout << "Unlucky";

    return 0;
}
