#include <stdio.h>

int main(void)
{
    int tableau[100];
    int recherche;
    int gauche = 0;
    int droite = 99;
    int trouve = 0;

    for (int i = 0; i < 100; i++) {
        tableau[i] = i * 2;
    }
    printf("Entrez l'entier a chercher : ");
    if (scanf("%d", &recherche) != 1) {
        fprintf(stderr, "Entree invalide.\n");
        return 1;
    }
    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;
        if (tableau[milieu] == recherche) {
            trouve = 1;
            break;
        }
        if (tableau[milieu] < recherche) gauche = milieu + 1;
        else droite = milieu - 1;
    }
    printf("Resultat : entier %s\n", trouve ? "present" : "absent");
    return 0;
}