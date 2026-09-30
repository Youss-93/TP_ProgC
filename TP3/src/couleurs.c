#include <stdio.h>

struct Couleur {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main(void)
{
    const struct Couleur couleurs[] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x00, 0x00, 0x00, 0xff}
    };
    const size_t taille = sizeof couleurs / sizeof couleurs[0];

    for (size_t i = 0; i < taille; i++) {
        printf("Couleur %zu : R=%u G=%u B=%u A=%u\n", i + 1,
               couleurs[i].rouge, couleurs[i].vert, couleurs[i].bleu,
               couleurs[i].alpha);
    }
    return 0;
}