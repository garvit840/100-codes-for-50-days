#include <stdio.h>
#include <string.h>

int main()
{//Find the Longest Word in a Sentence
    char str[200], word[100], longest[100];
    int i = 0, j = 0;
    int max = 0;

    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';

            if (j > max)
            {
                max = j;
                strcpy(longest, word);
            }

            j = 0;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("%s", longest);

    return 0;
}