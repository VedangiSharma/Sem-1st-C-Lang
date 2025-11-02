#include <stdio.h>
#include <math.h> 


int countDigits(int n) {
    if (n == 0) {
        return 1;
    }
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}


int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    n = countDigits(num);

    int temp = originalNum;
    while (temp != 0) {
        remainder = temp % 10; 
        result += (int)pow(remainder, n);
        temp /= 10;
    }

    if (result == originalNum) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < 0) {
        printf("Armstrong numbers are typically defined for positive integers.\n");
        return 1;
    }
    
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}