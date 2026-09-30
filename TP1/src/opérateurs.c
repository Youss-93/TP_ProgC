#include <stdio.h>

int main(void)
{
    const int a = 16;
    const int b = 3;

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d (division entiere)\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    printf("%d == %d : %s\n", a, b, a == b ? "vrai" : "faux");
    printf("%d > %d : %s\n", a, b, a > b ? "vrai" : "faux");

    return 0;
}
