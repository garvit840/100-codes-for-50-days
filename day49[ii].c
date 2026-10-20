#include <stdio.h>
#include <string.h>

int main()
{//Print Initials with Surname in Full
    char name[100];
    int i, last = 0;

    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("%c ", name[0]);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
        {
            last = i + 1;

            if(strchr(name + i + 1, ' ') != NULL)
                printf("%c ", name[i + 1]);
        }
    }

    printf("%s", name + last);

    return 0;
}