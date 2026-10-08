#include <stdio.h>
#include <string.h>

int main()
{//— Check if two strings are Anagrams
    char s1[100], s2[100];
    int count[256] = {0};
    int i;

    scanf("%s %s", s1, s2);

    if (strlen(s1) != strlen(s2))
    {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; s1[i] != '\0'; i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}