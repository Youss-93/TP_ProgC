#include <stdio.h>

static void afficher_entiers(const int *tableau, size_t taille)
{
    for (const int *p = tableau; p < tableau + taille; p++) {
        printf("%d%s", *p, p + 1 == tableau + taille ? "\n" : " ");
    }
}

static void afficher_flottants(const float *tableau, size_t taille)
{
    for (const float *p = tableau; p < tableau + taille; p++) {
        printf("%.1f%s", *p, p + 1 == tableau + taille ? "\n" : " ");
    }
}

int main(void)
{
    int entiers[10] = {11, 12, 34, 56, 78, 90, 123, 45, 67, 89};
    float reels[10] = {2.9f, 1.2f, 4.5f, 7.8f, 0.1f,
                       3.4f, 6.7f, 9.0f, 2.3f, 5.6f};

    printf("Entiers avant : "); afficher_entiers(entiers, 10);
    printf("Reels avant : "); afficher_flottants(reels, 10);
    for (size_t index = 0; index < 10; index += 2) {
        *(entiers + index) *= 3;
        *(reels + index) *= 3.0f;
    }
    printf("Entiers apres : "); afficher_entiers(entiers, 10);
    printf("Reels apres : "); afficher_flottants(reels, 10);
    return 0;
}