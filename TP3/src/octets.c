#include <stdio.h>

static void afficher_octets(const void *adresse, size_t taille)
{
    const unsigned char *octets = adresse;
    for (size_t i = 0; i < taille; i++) {
        printf("%02x%s", octets[i], i + 1 == taille ? "\n" : " ");
    }
}

int main(void)
{
    short s = 0x0302;
    int i = 0x01020304;
    long int l = 0x0102030405060708L;
    float f = 1.25f;
    double d = 1.0;
    long double ld = 1.0L;

    printf("Octets de short : "); afficher_octets(&s, sizeof s);
    printf("Octets de int : "); afficher_octets(&i, sizeof i);
    printf("Octets de long int : "); afficher_octets(&l, sizeof l);
    printf("Octets de float : "); afficher_octets(&f, sizeof f);
    printf("Octets de double : "); afficher_octets(&d, sizeof d);
    printf("Octets de long double : "); afficher_octets(&ld, sizeof ld);
    return 0;
}