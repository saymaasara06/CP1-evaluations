
#include <iostream>
using namespace std;
int getMin(int arr[], int n)
 {
    int mn = arr[0];
    for (int i = 1; i < n; i++)
        {
        if (arr[i] < mn)
            mn = arr[i];
    }
    return mn;
}
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        {
        if (arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
        {
        cin >> arr[i];
    }

    cout << getMin(arr, n) << " " << getMax(arr, n);

    return 0;
}
