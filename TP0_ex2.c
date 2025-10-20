#include <stdio.h>

int main() {
    // Déclarations
    long A = 15;
    char B = 'A'; 
    short C = 10;

    printf("Initial values: A=%ld, B=%c (%d), C=%d\n\n", A, B, B, C);

   
    int expr1 = C + 3;  
    printf("(1) C + 3 = %d (type: int)\n", expr1);

    int expr2 = B + 1;  
    printf("(2) B + 1 = %d (type: int)\n", expr2);

    int expr3 = C + B;  
    printf("(3) C + B = %d (type: int)\n", expr3);

    int expr4 = 3 * C + 2 * B;
    printf("(4) 3*C + 2*B = %d (type: int)\n", expr4);

    long expr5 = 2 * B + (A + 10) / C;  /
    printf("(5) 2*B + (A+10)/C = %ld (type: long)\n", expr5);

    double expr6 = 2 * B + (A + 10.0) / C;  
    printf("(6) 2*B + (A+10.0)/C = %.2f (type: double)\n", expr6);

    return 0;
}
