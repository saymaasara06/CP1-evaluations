#include <stdio.h>
#include <string.h>
int main()
 {
    char n[20];
    scanf("%s", n);

    int len = strlen(n);
    char rev[20];
    int idx = 0;

    for (int i = len - 1; i >= 0; i--) {
        rev[idx++] = n[i];
    }
    rev[idx] = '\0';

    int start = 0;
    while (rev[start] == '0') start++;

    if (start == idx)
        printf("0\n");
    else
        printf("%s\n", rev + start);

    int is_palindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (n[i] != n[len - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

