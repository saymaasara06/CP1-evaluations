
#include <iostream>
using namespace std;

int main() {
    int RA, CA;
    cin >> RA >> CA;

    long long A[105][105];
    for (int i = 0; i < RA; i++)
        for (int j = 0; j < CA; j++)
            cin >> A[i][j];

    int RB, CB;
    cin >> RB >> CB;

    long long B[105][105];
    for (int i = 0; i < RB; i++)
        for (int j = 0; j < CB; j++)
            cin >> B[i][j];

    long long C[105][105] = {0};

    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            for (int k = 0; k < CA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            cout << C[i][j];
            if (j < CB - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
