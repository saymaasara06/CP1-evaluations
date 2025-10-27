#include <stdio.h>
int main()
 {
    int A, B;
    scanf("%d %d", &A, &B);

    int found = 0;

    for (int i = A; i <= B; i++)
        {
        int n = i;
        int lucky = 1;
        if (n == 0) lucky = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 4 && digit != 7)
                {
                lucky = 0;
                break;
            }
            n /= 10;
        }

        if (lucky)
            {
            printf("%d ", i);
            found = 1;
            }
       }

    if (!found)
        printf("-1");

    printf("\n");
    return 0;
}

