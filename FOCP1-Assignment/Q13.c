#include <stdio.h>

int main() {
    int n;
    int scores[100];
    int peak_found = 0;

    printf("Enter the number of scores (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input for array size.\n");
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

    printf("\n--- Peak Elements Found ---\n");

    if (n == 1) {
        printf("Peak found: %d at index 0.\n", scores[0]);
        peak_found = 1;
    } else {
        if (scores[0] >= scores[1]) {
            printf("Peak found: %d at index 0.\n", scores[0]);
            peak_found = 1;
        }

        for (int i = 1; i < n - 1; i++) {
            if (scores[i] >= scores[i - 1] && scores[i] >= scores[i + 1]) {
                printf("Peak found: %d at index %d.\n", scores[i], i);
                peak_found = 1;
            }
        }

        if (scores[n - 1] >= scores[n - 2]) {
            printf("Peak found: %d at index %d.\n", scores[n - 1], n - 1);
            peak_found = 1;
        }
    }

    if (peak_found == 0) {
        printf("No peak elements found in the array.\n");
    }

    return 0;
}