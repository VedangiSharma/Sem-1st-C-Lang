#include <stdio.h>

int add_bitwise(int a, int b) {
    int sum = a;
    int carry = b;

    while (carry != 0) {
        int current_sum = sum ^ carry;
        carry = (sum & carry) << 1;
        sum = current_sum;
    }
    return sum;
}

int subtract_bitwise(int a, int b) {
    int neg_b = add_bitwise(~b, 1);
    return add_bitwise(a, neg_b);
}

int main() {
    int num1, num2, difference;

    printf("Enter the minuend (A): ");
    if (scanf("%d", &num1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the subtrahend (B): ");
    if (scanf("%d", &num2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    difference = subtract_bitwise(num1, num2);

    printf("Result of %d - %d (using bitwise operators) is: %d\n", num1, num2, difference);

    return 0;
}