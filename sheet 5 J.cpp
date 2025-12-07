
#include <iostream>
#include <iomanip>
using namespace std;
double getAverage(double arr[], int n)
 {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main()
 {
    int n;
    cin >> n;

    double arr[10000];
    for (int i = 0; i < n; i++)
        {
        cin >> arr[i];
    }

    double avg = getAverage(arr, n);

    cout << fixed << setprecision(7) << avg;

    return 0;
}
