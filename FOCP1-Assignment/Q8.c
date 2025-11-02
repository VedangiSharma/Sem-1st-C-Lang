#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1;
    long long nextTerm;

    printf("Enter the number of terms (n) for the Fibonacci series: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms:\n", n);

    if (n >= 1) {
        printf("%lld", t1);
    }

    if (n >= 2) {
        printf(", %lld", t2);
    }

    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %lld", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}
