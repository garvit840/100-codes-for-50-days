#include <stdio.h>

int main()
{//Insert an element in an array at a given position
    int n, a[100], value, pos;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &value);
    scanf("%d", &pos);

    for(int i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    n++;

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}