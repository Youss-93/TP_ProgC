#include <stdio.h>

int main(void)
{
    const int tableau[100] = {
        4, 9, 1, 5, 8, 7, 3, 6, 2, 0
    };
    int recherche;
    int trouve = 0;

    printf("Entrez l'entier a chercher : ");
    if (scanf("%d", &recherche) != 1) {
        fprintf(stderr, "Entree invalide.\n");
        return 1;
    }
    for (size_t i = 0; i < 100; i++) {
        if (tableau[i] == recherche) {
            trouve = 1;
            break;
        }
    }
    printf("Resultat : entier %s\n", trouve ? "present" : "absent");
    return 0;
}