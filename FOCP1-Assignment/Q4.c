#include <stdio.h>

void swap_by_pointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_values(int a, int b, const char *method) {
    printf("%s: A = %d, B = %d\n", method, a, b);
}

int main() {
    int A, B;

    printf("Enter the first integer (A): ");
    if (scanf("%d", &A) != 1) return 1;
    
    printf("Enter the second integer (B): ");
    if (scanf("%d", &B) != 1) return 1;

    int a1 = A, b1 = B;
    int a2 = A, b2 = B;
    int a3 = A, b3 = B;
    int a4 = A, b4 = B;
    
    printf("\nInitial values: A = %d, B = %d\n\n", A, B);

    
    /* Method 1: Using a Temporary Variable */
    int temp = a1;
    a1 = b1;
    b1 = temp;
    print_values(a1, b1, "1. Temp Variable");


    /* Method 2: Using Arithmetic Operators */
    a2 = a2 + b2;
    b2 = a2 - b2;
    a2 = a2 - b2;
    print_values(a2, b2, "2. Arithmetic");


    /* Method 3: Using Bitwise XOR Operator */
    a3 = a3 ^ b3;
    b3 = a3 ^ b3;
    a3 = a3 ^ b3;
    print_values(a3, b3, "3. Bitwise XOR");


    /* Method 4: Using Pointers (Call by Reference) */
    swap_by_pointers(&a4, &b4);
    print_values(a4, b4, "4. Pointers");

    return 0;
}