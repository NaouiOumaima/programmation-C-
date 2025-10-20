#include <stdio.h>
#define MAX 100
int main(){
    int A[MAX];
    int N , i ;
    int max, min;
    int posMax, posMin;

    do {
        printf("Entrer la dimension du tableau : ");
        scanf("%d", &N);
    } while (N < 1 || N > MAX);

    for (i = 0; i < N; i++) {
        printf("Entrez un entier : ");
        scanf("%d", &A[i]);
    }
     
    max = min = A[0];
    posMax = posMin = 0;
    
    for (i = 1; i < N; i++) {
        if (A[i] > max) {
            max = A[i];
            posMax = i; // position du premier maximum
        }
        if (A[i] < min) {
            min = A[i];
            posMin = i; // position du premier minimum
        }
    }

    // Affichage des résultats
    printf("\nMaximum = %d, position = %d", max, posMax);
    printf("\nMinimum = %d, position = %d\n", min, posMin);

    return 0;
}