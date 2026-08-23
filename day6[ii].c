#include <stdio.h>

int main() {
    int n;

    // Input an integer
    printf("enter value of n:");
    scanf("%d", &n);

    // Check whether the number is positive, negative, or zero
    if (n >= 0) {
        if (n == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}