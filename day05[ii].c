#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

    // Input
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Output
    printf("%d:%d:%d", hours, minutes, seconds);

    return 0;
}
