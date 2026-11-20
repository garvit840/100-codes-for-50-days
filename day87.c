#include <stdio.h>

int main() {//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

    enum Menu {
        ADD = 1,
        SUBTRACT,
        MULTIPLY
    };

    enum Menu choice;
    int a, b;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");

    printf("Enter choice: ");
    scanf("%d", (int *)&choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {

        case ADD:
            printf("Result = %d", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}