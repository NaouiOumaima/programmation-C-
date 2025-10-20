#include <stdio.h>

int main() {
    char c;

    // Demander à l'utilisateur de saisir un caractère
    printf("Entrez un caractère: ");
    c = getchar();  // lecture du caractère

    // Affichage du caractère et de son code ASCII
    printf("Vous avez saisi: '%c'\n", c);
    printf("Code ASCII: %d\n", c);

    return 0;
}
