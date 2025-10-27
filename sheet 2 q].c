#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
        {
        unsigned int N;
        scanf("%u", &N);

        if (N == 0)
            {
            printf("0\n");
            continue;
        }

        int digits[10];
        int count = 0;


        while (N > 0) {
            digits[count++] = N % 10;
            N /= 10;
        }

        for (int i = 0; i < count; i++)
            {
            printf("%d", digits[i]);
            if (i != count - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}

