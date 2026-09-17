#include <stdio.h>

int main()
{//Search for an element in an array using linear search.
    int n, a[100], key, index = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}