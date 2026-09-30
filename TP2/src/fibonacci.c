#include <stdio.h>

int main(void)
{
    int n;
    unsigned long long precedent = 0;
    unsigned long long courant = 1;

    printf("Combien de termes (n) ? ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 93) {
        fprintf(stderr, "n doit etre compris entre 0 et 93.\n");
        return 1;
    }
    for (int i = 0; i <= n; i++) {
        printf("%llu%s", precedent, i == n ? "\n" : ", ");
        unsigned long long suivant = precedent + courant;
        precedent = courant;
        courant = suivant;
    }
    return 0;
}