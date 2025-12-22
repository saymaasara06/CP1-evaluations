
#include <bits/stdc++.h>
using namespace std;
void printPyramid(int row, int n)
{
    if (row == n)
        return;

    for (int i = 0; i < n - row - 1; i++)
        cout << " ";

    for (int i = 0; i < 2 * row + 1; i++)
        cout << "*";

    cout << endl;

    printPyramid(row + 1, n);
}

int main()
 {
    int N;
    cin >> N;

    printPyramid(0, N);
    return 0;
}
