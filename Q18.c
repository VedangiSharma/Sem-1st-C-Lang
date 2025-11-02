#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n;
    int duplicates[100];
    int dup_count = 0;
    
    printf("Enter the number of elements (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid input for array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input for element.\n");
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        int is_already_processed = 0;
        for (int k = 0; k < dup_count; k++) {
            if (arr[i] == duplicates[k]) {
                is_already_processed = 1;
                break;
            }
        }

        if (is_already_processed) {
            continue;
        }

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicates[dup_count] = arr[i];
                dup_count++;
                break;
            }
        }
    }

    printf("\n--- Duplicate Elements ---\n");
    if (dup_count > 0) {
        print_array(duplicates, dup_count);
    } else {
        printf("-1\n");
    }

    return 0;
}