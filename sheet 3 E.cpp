#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++)
        cin >> A[i];

    int lowest = A[0];
    int pos = 1;

    for (int i = 1; i < N; i++)
    {
        if (A[i] < lowest)
        {
            lowest = A[i];
            pos = i + 1;
        }
    }

    cout << lowest << " " << pos;
    return 0;
}
