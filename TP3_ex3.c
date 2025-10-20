#include <stdio.h>

int main() {
    int a, b;
    int resultat = 0;

    printf("Entrez deux entiers positifs (a et b) : ");
    scanf("%d %d", &a, &b);

    printf("\nCalcul de %d * %d :\n", a, b);

    // copies pour affichage car on va modifier a et b
    int A = a, B = b;

    while (B != 0) {
        if (B % 2 != 0) {  // si B est impair
            printf("= %d * %d + %d\n", A, B - 1, A);
            resultat += A;
            B = B - 1;
        } else {           // si B est pair
            printf("= %d * %d + %d\n", 2 * A, B / 2, resultat);
            A = 2 * A;
            B = B / 2;
        }
    }

    printf("= %d\n", resultat);
    return 0;
}
