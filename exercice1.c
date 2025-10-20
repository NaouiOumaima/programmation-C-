#include <stdio.h>

#define TYPEOF(x) _Generic((x), \
    int: "int", \
    float: "float", \
    double: "double", \
    long: "long", \
    long double: "long double", \
    default: "autre" \
)

int main() {
    int n = 10, p = 4;
    long q = 2;
    float x = 1.75;

    printf("le type de n + q est %s et la valeur %d\n", TYPEOF(n+q), n+q);
    printf("le type de q + q * (n>p) est %s et la valeur %d\n", TYPEOF(q + q * (n>p)), q + q * (n>p));
    printf("le type de n + x est %s et la valeur %d\n", TYPEOF(n + x), n + x);
    printf("le type de (q-2) && (n-10) est %s et la valeur %d\n", TYPEOF((q-2) && (n-10)), (q-2) && (n-10));
    printf("le type de q && n est %s et la valeur %d\n", TYPEOF(q && n), q && n);
    printf("le type de  n  MOD p +q est %s et la valeur %d\n", TYPEOF( n % p +q),  n % p +q);
    printf("le type de n < p est %s et la valeur %d\n", TYPEOF(n < p), n < p);
    printf("le type de x * (q==2) est %s et la valeur %d\n", TYPEOF(x * (q==2)), x * (q==2));
    printf("le type de n >= p est %s et la valeur %d\n", TYPEOF(n >= p), n >= p);
    printf("le type de x *(q=5) est %s et la valeur %d\n", TYPEOF(x *(q=5)), x *(q=5));
    printf("le type de n > q est %s et la valeur %d\n", TYPEOF(n > q),n > q);
    return 0;
}
