#include <stdio.h>

int main()
{//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
    int day, month, year;

    scanf("%d/%d/%d", &day, &month, &year);

    char months[12][4] = {
        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"
    };

    printf("%02d-%s-%d", day, months[month - 1], year);

    return 0;
}