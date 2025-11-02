#include <stdio.h>

int main() {
    int n;
    int target_score = 99;
    int count = 0;

    printf("Enter the number of students (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input for student count.\n");
        return 1;
    }

    char names[100][50];
    int marks[100];

    printf("Enter the name and score for each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d Name: ", i + 1);
        scanf("%49s", names[i]);

        printf("Student %d Score: ", i + 1);
        if (scanf("%d", &marks[i]) != 1) {
            printf("Invalid input for score.\n");
            return 1;
        }
    }

    printf("\n--- Students Who Scored %d ---\n", target_score);

    for (int i = 0; i < n; i++) {
        if (marks[i] == target_score) {
            printf("- %s\n", names[i]);
            count++;
        }
    }

    printf("\nTotal students who scored %d: %d\n", target_score, count);

    return 0;
}