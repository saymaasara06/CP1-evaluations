#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int num = 1;
    for (int i = 0; i < N; i++)
     {
        printf("%d %d %d PUM\n", num, num+1, num+2);
        num += 4;
    }

    return 0;
}

