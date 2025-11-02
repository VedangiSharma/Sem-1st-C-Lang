#include <stdio.h>

int main() {
    int n;
    int scores[100];
    int even_array[100];
    int odd_array[100];
    int even_count = 0;
    int odd_count = 0;

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

    for (int i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count] = scores[i];
            even_count++;
        } else {
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }

    printf("\n--- Even Scores (%d) ---\n", even_count);
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n");

    printf("--- Odd Scores (%d) ---\n", odd_count);
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    printf("\n");

    return 0;
}