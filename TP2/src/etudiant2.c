#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[60];
    float note_c;
    float note_systeme;
};

int main(void)
{
    struct Etudiant etudiants[5];
    const struct Etudiant donnees[5] = {
        {"Dupont", "Marie", "20 boulevard Niels Bohr, Lyon", 16.5f, 12.1f},
        {"Martin", "Pierre", "22 boulevard Niels Bohr, Lyon", 14.0f, 14.1f},
        {"Bernard", "Sofia", "5 rue Victor Hugo, Paris", 15.5f, 13.0f},
        {"Petit", "Lucas", "8 avenue de la Republique, Lille", 12.0f, 15.5f},
        {"Robert", "Nina", "12 rue Pasteur, Nantes", 17.0f, 16.0f}
    };

    for (size_t i = 0; i < 5; i++) {
        strcpy(etudiants[i].nom, donnees[i].nom);
        strcpy(etudiants[i].prenom, donnees[i].prenom);
        strcpy(etudiants[i].adresse, donnees[i].adresse);
        etudiants[i].note_c = donnees[i].note_c;
        etudiants[i].note_systeme = donnees[i].note_systeme;
        printf("%s %s, %s, C: %.1f, systeme: %.1f\n",
               etudiants[i].prenom, etudiants[i].nom, etudiants[i].adresse,
               etudiants[i].note_c, etudiants[i].note_systeme);
    }
    return 0;
}