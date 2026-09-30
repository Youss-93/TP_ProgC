#include <stdio.h>

int main(void)
{
    char caractere = 'A';
    unsigned char caractere_non_signe = 200;
    short petit_entier = -32000;
    unsigned short petit_entier_non_signe = 65000;
    int entier = -100000;
    unsigned int entier_non_signe = 100000;
    long int grand_entier = -200000L;
    unsigned long int grand_entier_non_signe = 200000UL;
    long long int tres_grand_entier = -3000000000LL;
    unsigned long long int tres_grand_entier_non_signe = 3000000000ULL;
    float reel = 3.14f;
    double double_precision = 3.14159;
    long double grande_precision = 3.141592653589793L;

    printf("char: %c\n", caractere);
    printf("unsigned char: %hhu\n", caractere_non_signe);
    printf("short: %hd\n", petit_entier);
    printf("unsigned short: %hu\n", petit_entier_non_signe);
    printf("int: %d\n", entier);
    printf("unsigned int: %u\n", entier_non_signe);
    printf("long int: %ld\n", grand_entier);
    printf("unsigned long int: %lu\n", grand_entier_non_signe);
    printf("long long int: %lld\n", tres_grand_entier);
    printf("unsigned long long int: %llu\n", tres_grand_entier_non_signe);
    printf("float: %.2f\n", reel);
    printf("double: %.5f\n", double_precision);
    printf("long double: %.15Lf\n", grande_precision);

    return 0;
}