#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int scores[100];
    int prime_count = 0;

    printf("Enter the number of scores (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input for score count.\n");
        return 1;
    }

    printf("Enter %d scores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        if (scanf("%d", &scores[i]) != 1) {
            printf("Invalid input for score.\n");
            return 1;
        }
    }

    printf("\n--- Prime Numbers Found ---\n");

    for (int i = 0; i < n; i++) {
        if (is_prime(scores[i])) {
            printf("%d ", scores[i]);
            prime_count++;
        }
    }
    printf("\n");

    printf("Total number of prime scores: *%d*\n", prime_count);

    return 0;
}