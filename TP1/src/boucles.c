#include <stdio.h>

int main(void)
{
    const int compteur = 5;

    for (int ligne = 1; ligne <= compteur; ligne++) {
        for (int colonne = 1; colonne <= ligne; colonne++) {
            printf("*");
            if (colonne < ligne) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}