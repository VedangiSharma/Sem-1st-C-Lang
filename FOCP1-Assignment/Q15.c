#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int temp;

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

    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Array Transformation Logic (Cyclic Rotation)
    if (n > 1) {
        // 1. Store the last element (the one that will wrap around)
        temp = arr[n - 1];

        // 2. Shift all elements from index n-2 down to 0, one position to the right
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        // 3. Place the stored last element at the first position
        arr[0] = temp;
    }

    printf("Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}