#include <stdio.h>

int main() {
    int a, b;
    char op;
    int resultat;

    printf("Entrez une expression (ex: 3+4) : ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+':
            resultat = a + b;
            break;
        case '-':
            resultat = a - b;
            break;
        case '*':
            resultat = a * b;
            break;
        case '/':
            if (b != 0)
                resultat = a / b;
            else {
                printf("Erreur : division par zéro !\n");
                return 1;
            }
            break;
        case '%':
            if (b != 0)
                resultat = a % b;
            else {
                printf("Erreur : modulo par zéro !\n");
                return 1;
            }
            break;
        default:
            printf("Opérateur non valide !\n");
            return 1;
    }

    printf("Résultat : %d\n", resultat);
    return 0;
}
