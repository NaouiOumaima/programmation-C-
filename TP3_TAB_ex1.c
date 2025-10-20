#include <stdio.h>
#define MAX 50

int main() {
    int TAB[MAX], TPOS[MAX], TNEG[MAX];
    int i, N, j = 0, k = 0;

    // Lecture de la dimension
    do {
        printf("Entrer la dimension du tableau (max 50) : ");
        scanf("%d", &N);
    } while (N < 1 || N > MAX);

    // Remplissage du tableau
    for (i = 0; i < N; i++) {
        printf("Entrez un entier : ");
        scanf("%d", &TAB[i]);
    }

    // Affichage du tableau
    printf("\nAffichage du tableau : ");
    for (i = 0; i < N; i++) {
        printf("%d ", TAB[i]);
    }

    // Index des éléments nuls
    printf("\nIndex des elements nuls : ");
    for (i = 0; i < N; i++) {
        if (TAB[i] == 0) {
            printf("%d ", i);
        }
    }

    // Inversion du tableau sans tableau d'aide
    for (i = 0; i < N / 2; i++) {
        TAB[i] = TAB[i] + TAB[N - 1 - i];
        TAB[N - 1 - i] = TAB[i] - TAB[N - 1 - i];
        TAB[i] = TAB[i] - TAB[N - 1 - i];
    }

    printf("\n\nTableau TAB apres inversion : ");
    for (i = 0; i < N; i++) {
        printf("%d ", TAB[i]);
    }

    // Copie des positifs et negatifs
    for (i = 0; i < N; i++) {
        if (TAB[i] > 0) {
            TPOS[j++] = TAB[i];
        } else if (TAB[i] < 0) {
            TNEG[k++] = TAB[i];
        }
    }

    // Affichage TPOS et TNEG
    printf("\n\nTableau TPOS (positifs) : ");
    for (i = 0; i < j; i++) {
        printf("%d ", TPOS[i]);
    }

    printf("\nTableau TNEG (negatifs) : ");
    for (i = 0; i < k; i++) {
        printf("%d ", TNEG[i]);
    }

    printf("\n");

    return 0;
}
