#include <stdio.h>

int main() {
    int A = 20, B = 5, C = -10, D = 2, X = 12, Y = 15;
    int result;

    printf("Initial values: A=%d, B=%d, C=%d, D=%d, X=%d, Y=%d\n\n", A, B, C, D, X, Y);

    result = (5*X)+2*((3*B)+4);
    printf("(1) result=%d (A=%d, B=%d, C=%d, D=%d, X=%d, Y=%d)\n", result, A,B,C,D,X,Y);

    result = (5*(X+2)*3)*(B+4);
    printf("(2) result=%d (A=%d, B=%d, C=%d, D=%d, X=%d, Y=%d)\n", result, A,B,C,D,X,Y);

    result = A == (B=5);
    printf("(3) result=%d (A=%d, B=%d)\n", result, A,B);

    result = A += (X+5);
    printf("(4) result=%d (A=%d)\n", result, A);

    result = A != (C *= (-D));
    printf("(5) result=%d (A=%d, C=%d, D=%d)\n", result, A,C,D);

    result = A *= C+(X-D);
    printf("(6) result=%d (A=%d)\n", result, A);

    result = A %= D++;
    printf("(7) result=%d (A=%d, D=%d)\n", result, A,D);

    result = A %= ++D;
    printf("(8) result=%d (A=%d, D=%d)\n", result, A,D);

    result = (X++)*(A+C);
    printf("(9) result=%d (X=%d, A=%d, C=%d)\n", result, X,A,C);

    result = A = X*(B<C)+Y*!(B<C);
    printf("(10) result=%d (A=%d)\n", result, A);

    result = !(X-D+C)||D;
    printf("(11) result=%d (X=%d, D=%d, C=%d)\n", result, X,D,C);

    result = A&&B||!0&&C&&!D;
    printf("(12) result=%d (A=%d, B=%d, C=%d, D=%d)\n", result, A,B,C,D);

    result = ((A&&B)||(!0&&C))&&!D;
    printf("(13) result=%d (A=%d, B=%d, C=%d, D=%d)\n", result, A,B,C,D);

    result = ((A&&B)||!0)&&(C&&(!D));
    printf("(14) result=%d (A=%d, B=%d, C=%d, D=%d)\n", result, A,B,C,D);

    return 0;
}
