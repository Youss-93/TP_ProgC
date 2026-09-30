#include <stdio.h>

int main(void)
{
    const int a = 2;
    const int b = 3;
    int resultat = 1;

    if (b < 0) {
        fprintf(stderr, "L'exposant doit etre positif ou nul.\n");
        return 1;
    }
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }
    printf("%d^%d = %d\n", a, b, resultat);
    return 0;
}