#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) > 0) {
        printf("%d\n", gcd(a, b));
    }
    return 0;
}
