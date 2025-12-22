#include <iostream>
using namespace std;

void printEvenReverse(long long arr[], int index, int n)
{
    if (index >= n)
        return;

    printEvenReverse(arr, index + 1, n);
    if (index % 2 == 0)
        {
        cout << arr[index] << " ";
    }
}

int main()
 {
    int N;
    cin >> N;

    long long arr[N];
    for (int i = 0; i < N; i++)
        {
        cin >> arr[i];
    }

    printEvenReverse(arr, 0, N);

    return 0;
}

