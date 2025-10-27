#include <stdio.h>
int main()
 {
    int T;
    scanf("%d", &T);

    while (T--) {
        unsigned int N;
        scanf("%u", &N);

        int ones = 0;
        unsigned int temp = N;

        while (temp) {
            if (temp % 2 == 1) ones++;
            temp /= 2;
        }

        unsigned int result = (1 << ones) - 1;

        printf("%u\n", result);
    }

    return 0;
}

