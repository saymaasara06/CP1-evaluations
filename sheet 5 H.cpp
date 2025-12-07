
#include <iostream>
using namespace std;
void printNTimes(int N, char C)
{
    for (int i = 0; i < N; i++)
        {
        cout << C << " ";
    }
}

int main()
 {
    int T;
    cin >> T;

    while (T--)

        {
        int N;
        char C;
        cin >> N >> C;

        printNTimes(N, C);
        cout << "\n";
    }

    return 0;
}
