#include <stdio.h>

int main() {
    int n;

    // Input an integer
    printf("enter value of n:");
    scanf("%d", &n);

    // Check even or odd
    if (n % 2 == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }

    return 0;
}