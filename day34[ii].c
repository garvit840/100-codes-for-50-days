#include <stdio.h>

int main()
{//Delete an element from an array.
    int n, a[100], value, pos = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &value);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == value)
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        printf("-1");
    }
    else
    {
        for(int i = pos; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;

        for(int i = 0; i < n; i++)
            printf("%d ", a[i]);
    }

    return 0;
}