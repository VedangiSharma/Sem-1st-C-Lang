#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[101];
    int n;
    int element, position;

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

    printf("\nArray Before Insertion: ");
    print_array(arr, n);

    printf("\nEnter the element to insert: ");
    if (scanf("%d", &element) != 1) {
        printf("Invalid input for element.\n");
        return 1;
    }

    printf("Enter the position for insertion (1 for front, %d for end, or a number in between): ", n + 1);
    if (scanf("%d", &position) != 1 || position < 1 || position > n + 1) {
        printf("Invalid input for position.\n");
        return 1;
    }

    if (n >= 101) {
        printf("Array is full. Cannot insert.\n");
        return 1;
    }

    int index = position - 1;

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
    n++;

    printf("\nArray After Insertion: ");
    print_array(arr, n);

    return 0;
}