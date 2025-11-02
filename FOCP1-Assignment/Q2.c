#include <stdio.h>

int findHCF_recursive(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findHCF_recursive(b, a % b);
}

int main() {
    int num1, num2, hcf;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Invalid input. Please enter two positive integers.\n");
        return 1;
    }

    hcf = findHCF_recursive(num1, num2);

    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
