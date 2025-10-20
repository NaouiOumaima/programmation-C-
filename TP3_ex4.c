#include <stdio.h>

int main() {
    int n;
    long U1 = 1, U2 = 1, Un;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // Affichage initial de U1 et U2
    printf("U1 = 1\n");
    printf("U2 = 1\n");

    if (n == 1) {
        printf("=> U%d = %ld\n", n, U1);
    } 
    else if (n == 2) {
        printf("=> U%d = %ld\n", n, U2);
    } 
    else {
        for (int i = 3; i <= n; i++) {
            Un = U1 + U2;
            printf("U%d = %ld\n", i, Un); 
            U1 = U2;
            U2 = Un;
        }
        printf("=> La valeur finale U%d = %ld\n", n, Un);
    }

    return 0;
}
