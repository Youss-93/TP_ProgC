#include <stdio.h>

struct Couleur {
    unsigned char r, g, b, a;
};

static int meme_couleur(struct Couleur gauche, struct Couleur droite)
{
    return gauche.r == droite.r && gauche.g == droite.g &&
           gauche.b == droite.b && gauche.a == droite.a;
}

int main(void)
{
    const struct Couleur couleurs[100] = {
        {0xff, 0x23, 0x23, 0x45}, {0xff, 0x00, 0x23, 0x12},
        {0xff, 0x23, 0x23, 0x45}, {0x00, 0x00, 0x00, 0xff}
    };
    struct Couleur distinctes[100];
    int occurrences[100] = {0};
    size_t nombre_distinctes = 0;

    for (size_t i = 0; i < 100; i++) {
        size_t position = 0;
        while (position < nombre_distinctes &&
               !meme_couleur(couleurs[i], distinctes[position])) {
            position++;
        }
        if (position == nombre_distinctes) {
            distinctes[nombre_distinctes++] = couleurs[i];
        }
        occurrences[position]++;
    }
    for (size_t i = 0; i < nombre_distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n", distinctes[i].r,
               distinctes[i].g, distinctes[i].b, distinctes[i].a,
               occurrences[i]);
    }
    return 0;
}