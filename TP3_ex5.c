#include <stdio.h>

int main() {
    int n, i;
    float x, resultat;

    printf("Entrez le degré du polynôme n : ");
    scanf("%d", &n);

    float coeffs[n + 1]; 

    printf("Entrez les coefficients du polynôme (de An à A0) :\n");
    for (i = n; i >= 0; i--) {
        printf("A%d = ", i);
        scanf("%f", &coeffs[i]);
    }

    printf("Entrez la valeur de X : ");
    scanf("%f", &x);

    resultat = coeffs[n]; 
    for (i = n - 1; i >= 0; i--) {
        resultat = resultat * x + coeffs[i];
    }

    printf("La valeur du polynôme P(%.2f) = %.4f\n", x, resultat);

    return 0;
}

