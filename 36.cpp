
#include <iostream>
using namespace std;
void printNumbers(int i, int n)
 {
    if (i > n)
        return;

    cout << i << endl;
    printNumbers(i + 1, n);
}

int main()
{
    int N;
    cin >> N;

    printNumbers(1, N);

    return 0;
}
