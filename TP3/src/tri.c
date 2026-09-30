#include <stdio.h>

static void afficher(const int *tableau, size_t taille)
{
    for (size_t i = 0; i < taille; i++) {
        printf("%d%s", tableau[i], i + 1 == taille ? "\n" : " ");
    }
}

int main(void)
{
    int tableau[100];
    for (int i = 0; i < 100; i++) {
        tableau[i] = ((i * 73) % 201) - 100;
    }
    printf("Tableau non trie :\n");
    afficher(tableau, 100);
    for (size_t i = 0; i < 100; i++) {
        for (size_t j = i + 1; j < 100; j++) {
            if (tableau[j] < tableau[i]) {
                int temporaire = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = temporaire;
            }
        }
    }
    printf("Tableau trie par ordre croissant :\n");
    afficher(tableau, 100);
    return 0;
}