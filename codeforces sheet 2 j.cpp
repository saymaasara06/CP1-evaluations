#include <iostream>
using namespace std;
int main()
 {
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++)
        {
        bool prime = true;
        for (int j = 2; j * j <= i; j++)
         {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime) cout << i << " ";
        }
    cout << endl;
    return 0;
}
