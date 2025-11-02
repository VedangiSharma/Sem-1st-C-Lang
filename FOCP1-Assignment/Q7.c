#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter the number of rows for the binary pyramid: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}
