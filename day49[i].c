#include <stdio.h>

int main()
{//Print the initials of a name
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    printf("%c ", name[0]);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i + 1] != ' ')
        {
            printf("%c ", name[i + 1]);
        }
    }

    return 0;
}