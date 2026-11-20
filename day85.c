#include <stdio.h>

int main() {//Assign explicit values starting from 10 and print them.

    enum Status {
        SUCCESS,
        FAILURE,
        TIMEOUT
    };

    enum Status status;

    status = SUCCESS;

    switch (status) {

        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}