#include <stdio.h>

static void afficher_binaire(int nombre)
{
    unsigned int valeur = (unsigned int) nombre;
    int commencer = 0;

    for (int bit = (int)(sizeof valeur * 8) - 1; bit >= 0; bit--) {
        unsigned int masque = 1u << bit;
        if ((valeur & masque) != 0 || commencer || bit == 0) {
            putchar((valeur & masque) != 0 ? '1' : '0');
            commencer = 1;
        }
    }
}

int main(void)
{
    const int nombres[] = {0, 4096, 65536, 65535, 1024};
    const size_t nombre_elements = sizeof nombres / sizeof nombres[0];

    for (size_t i = 0; i < nombre_elements; i++) {
        printf("%d en binaire = ", nombres[i]);
        afficher_binaire(nombres[i]);
        putchar('\n');
    }

    return 0;
}