#include <stdio.h>

int main() {//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

    enum Numbers {
        A = 10,
        B,
        C,
        D,
        E
    };

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);

    return 0;
}