#include <stdio.h>
#include <string.h>

int main()
{//Longest Substring Without Repeating Characters
    char s[100];
    int i, j, k, max = 0, count;

    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = i; j < n; j++)
        {
            int repeat = 0;

            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1)
                break;

            count++;
        }

        if(count > max)
            max = count;
    }

    printf("%d", max);

    return 0;
}