#include <stdio.h>

int main()
{//Print each character of a string on a new line
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}