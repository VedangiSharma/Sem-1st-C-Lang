#include <stdio.h>

void print_array(int arr[], int size) {
    if (size == 0) {
        printf("[Empty Array]");
    } else {
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n;
    int position;

    printf("Enter the number of initial elements (max 100): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 100) {
        printf("Invalid input for array size.\n");
        return 1;
    }

    if (n > 0) {
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            printf("Element %d: ", i + 1);
            if (scanf("%d", &arr[i]) != 1) {
                printf("Invalid input for element.\n");
                return 1;
            }
        }
    }

    printf("\nArray Before Deletion: ");
    print_array(arr, n);

    if (n == 0) {
        printf("Array is empty. Nothing to delete.\n");
        return 0;
    }

    printf("\nEnter the position for deletion (1 for front, %d for end, or a number in between): ", n);
    if (scanf("%d", &position) != 1 || position < 1 || position > n) {
        printf("Invalid input for position.\n");
        return 1;
    }

    int index = position - 1;

    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("\nArray After Deletion: ");
    print_array(arr, n);

    return 0;
}