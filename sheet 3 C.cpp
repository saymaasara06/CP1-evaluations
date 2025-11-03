#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < N; i++)
    {
        if (A[i] > 0)
            A[i] = 1;
        else if (A[i] < 0)
            A[i] = 2;
        else
            A[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i];
        if (i < N - 1) cout << " ";
    }

    return 0;
}

