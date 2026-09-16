#include <stdio.h>

int main() {//Write a program to check if a number is an Armstrong number.
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;              // get last digit
        sum = sum + digit * digit * digit;
        num = num / 10;                // remove last digit
    }

    if (sum == original) {
        printf("Armstrong number");
    } else {
        printf("Not an Armstrong number");
    }

    return 0;
}