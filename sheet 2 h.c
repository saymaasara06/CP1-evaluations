#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (x < 2) {
        printf("NO\n");
        return 0;
    }

    int is_prime = 1;

    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

