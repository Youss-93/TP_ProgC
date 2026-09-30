#include <stdio.h>

static int memes_chaines(const char *gauche, const char *droite)
{
    size_t i = 0;
    while (gauche[i] != '\0' && droite[i] != '\0') {
        if (gauche[i] != droite[i]) return 0;
        i++;
    }
    return gauche[i] == droite[i];
}

int main(void)
{
    const char *phrases[10] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };
    char recherche[100];
    int trouve = 0;

    printf("Entrez une phrase : ");
    if (scanf(" %99[^\n]", recherche) != 1) {
        fprintf(stderr, "Entree invalide.\n");
        return 1;
    }
    for (size_t i = 0; i < 10; i++) {
        if (memes_chaines(phrases[i], recherche)) {
            trouve = 1;
            break;
        }
    }
    printf("%s\n", trouve ? "Phrase trouvee" : "Phrase non trouvee");
    return 0;
}
