#include <stdio.h>

int main() {
    int n;
    int target = 99;
    int first_occurrence_index = -1;

    printf("Enter the number of scores (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input for array size.\n");
        return 1;
    }

    int scores[100];

    printf("Enter %d scores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        if (scanf("%d", &scores[i]) != 1) {
            printf("Invalid input for score.\n");
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (scores[i] == target) {
            first_occurrence_index = i;
            break;
        }
    }

    printf("\n--- Search Result ---\n");
    if (first_occurrence_index != -1) {
        printf("The first occurrence of score %d is at index %d.\n", target, first_occurrence_index);
    } else {
        printf("The score %d was not found in the array.\n", target);
    }

    return 0;
}