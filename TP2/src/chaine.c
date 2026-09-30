#include <stdio.h>

static size_t longueur(const char *chaine)
{
    size_t taille = 0;
    while (chaine[taille] != '\0') {
        taille++;
    }
    return taille;
}

static void copier(char *destination, const char *source)
{
    size_t i = 0;
    do {
        destination[i] = source[i];
        i++;
    } while (source[i - 1] != '\0');
}

static void concatener(char *destination, const char *source)
{
    size_t position = longueur(destination);
    size_t i = 0;
    do {
        destination[position + i] = source[i];
        i++;
    } while (source[i - 1] != '\0');
}

int main(void)
{
    const char premiere[] = "Hello";
    const char seconde[] = " World!";
    char copie[sizeof premiere];
    char concatenee[sizeof premiere + sizeof seconde - 1];

    copier(copie, premiere);
    copier(concatenee, premiere);
    concatener(concatenee, seconde);
    printf("Longueur de \"%s\" : %zu\n", premiere, longueur(premiere));
    printf("Copie : %s\n", copie);
    printf("Concaténation : %s\n", concatenee);
    return 0;
}