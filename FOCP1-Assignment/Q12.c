#include <stdio.h>

int main() {
    int n;
    int scores[100];
    int max_score;
    int min_score;

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

    if (n > 0) {
        max_score = scores[0];
        min_score = scores[0];

        for (int i = 1; i < n; i++) {
            if (scores[i] > max_score) {
                max_score = scores[i];
            }
            if (scores[i] < min_score) {
                min_score = scores[i];
            }
        }

        printf("\n--- Ranking and Analysis ---\n");
        printf("The *Maximum* score is: *%d*\n", max_score);
        printf("The *Minimum* score is: *%d*\n", min_score);
    } else {
        printf("The array is empty, cannot determine maximum and minimum scores.\n");
    }

    return 0;
}
