
#include <stdio.h>

int main() {//write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
    int n, i, sum = 0, total;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}
