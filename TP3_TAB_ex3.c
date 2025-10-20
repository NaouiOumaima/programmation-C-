#include <stdio.h>
#define MAX 50

int main() {
    int A[MAX + 1];
    int N, i, VAL, j;

    // Lecture de la taille initiale
    do {
        printf("Entrez le nombre d'elements du tableau (N <= 49) : ");
        scanf("%d", &N);
    } while (N < 1 || N >= MAX);

    // Lecture des N éléments triés
    printf("Entrez %d valeurs entieres triées par ordre croissant :\n", N);
    for (i = 0; i < N; i++) {
        int temp;
        do {
            scanf("%d", &temp);
            if (i > 0 && temp < A[i - 1]) {
                printf("Erreur : la valeur doit etre >= a la precedente (%d). Reessayez : ", A[i - 1]);
            }
        } while (i > 0 && temp < A[i - 1]);
        A[i] = temp;
    }

    // Lecture de la valeur à insérer
    printf("Entrez la valeur a inserer : ");
    scanf("%d", &VAL);

    // Trouver la position pour insertion
    i = 0;
    while (i < N && A[i] < VAL) {
        i++;
    }

    // Décalage des éléments à droite
    for (j = N; j > i; j--) {
        A[j] = A[j - 1];
    }

    // Insertion de VAL
    A[i] = VAL;

    // Affichage du tableau trié
    printf("\nTableau apres insertion : ");
    for (j = 0; j <= N; j++) {
        printf("%d ", A[j]);
    }
    printf("\n");

    return 0;
}
