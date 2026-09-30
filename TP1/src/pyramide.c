#include <stdio.h>

int main(void)
{
    const int n = 5;

    for (int ligne = 1; ligne <= n; ligne++) {
        for (int espace = ligne; espace < n; espace++) {
            putchar(' ');
        }

        for (int nombre = 1; nombre <= ligne; nombre++) {
            printf("%d", nombre);
        }
        for (int nombre = ligne - 1; nombre >= 1; nombre--) {
            printf("%d", nombre);
        }
        putchar('\n');
    }

    printf("Generation de la pyramide terminee.\n");
    return 0;
}
