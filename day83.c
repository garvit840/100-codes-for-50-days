#include <stdio.h>

int main() {
    enum Month {//Create an enum for months and print how many days each month has.
        JANUARY = 1,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };

    enum Month month;

    for (month = JANUARY; month <= DECEMBER; month++) {

        switch (month) {

            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                printf("Month %d = 31 days\n", month);
                break;

            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                printf("Month %d = 30 days\n", month);
                break;

            case FEBRUARY:
                printf("Month %d = 28 days\n", month);
                break;
        }
    }

    return 0;
}