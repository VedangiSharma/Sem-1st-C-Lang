#include <stdio.h>
#include <math.h>

long long decimalToBinary(int n) {
    long long binaryNum = 0;
    int rem, i = 1;

    while (n != 0) {
        rem = n % 2;
        n /= 2;
        binaryNum += rem * i;
        i *= 10;
    }
    return binaryNum;
}

int binaryToDecimal(long long n) {
    int decimalNum = 0, i = 0, rem;

    while (n != 0) {
        rem = n % 10;
        n /= 10;
        decimalNum += rem * pow(2, i);
        ++i;
    }
    return decimalNum;
}

int main() {
    int choice;
    int decimal;
    long long binary;

    printf("Choose conversion type:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter choice (1 or 2): ");

    if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
        printf("Invalid choice.\n");
        return 1;
    }

    if (choice == 1) {
        printf("Enter a decimal number: ");
        if (scanf("%d", &decimal) != 1 || decimal < 0) {
            printf("Invalid decimal input.\n");
            return 1;
        }
        binary = decimalToBinary(decimal);
        printf("Binary equivalent: %lld\n", binary);
    } else {
        printf("Enter a binary number (up to 10 digits): ");
        if (scanf("%lld", &binary) != 1) {
            printf("Invalid binary input.\n");
            return 1;
        }
        decimal = binaryToDecimal(binary);
        printf("Decimal equivalent: %d\n", decimal);
    }

    return 0;
}
