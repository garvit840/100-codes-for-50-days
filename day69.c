
#include <stdio.h>

int main() {//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
    int n, i, x, repeated = 0;
    int freq[1001] = {0};
    int found = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &x);

        freq[x]++;

        if(freq[x] == 2) {
            repeated = x;
            found = 1;
        }
    }

    if(found == 1) {
        printf("%d", repeated);
    }

    return 0;
}
