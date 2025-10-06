#include <iostream>
using namespace std;
int main()
 {
    int N;
    cin >> N;

    int a = 0, b = 1;

    for (int i = 1; i <= N; i++)
        {
        cout << a;
        if (i < N) cout << " ";

        int c = a + b;
        a = b;
        b = c;
       }
    cout << endl;
    return 0;
}

