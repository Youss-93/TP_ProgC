#include <stdio.h>

int main(void)
{
    const char *noms[] = {"Dupont", "Martin", "Bernard", "Petit", "Robert"};
    const char *prenoms[] = {"Marie", "Pierre", "Sofia", "Lucas", "Nina"};
    const char *adresses[] = {
        "20 boulevard Niels Bohr, Lyon",
        "22 boulevard Niels Bohr, Lyon",
        "5 rue Victor Hugo, Paris",
        "8 avenue de la Republique, Lille",
        "12 rue Pasteur, Nantes"
    };
    const float notes_c[] = {16.5f, 14.0f, 15.5f, 12.0f, 17.0f};
    const float notes_systeme[] = {12.1f, 14.1f, 13.0f, 15.5f, 16.0f};

    for (size_t i = 0; i < 5; i++) {
        printf("Etudiant %zu : %s %s\n", i + 1, prenoms[i], noms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Programmation en C : %.1f\n", notes_c[i]);
        printf("Systeme d'exploitation : %.1f\n\n", notes_systeme[i]);
    }
    return 0;
}