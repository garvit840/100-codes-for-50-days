#include <stdio.h>

int main() {

    enum Status {//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
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