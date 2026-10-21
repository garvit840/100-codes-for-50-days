#include <stdio.h>

int main()
{//For every element, find the nearest greater element on its right.
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        int next = -1;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        printf("%d", next);

        if(i < n - 1)
            printf(", ");
    }

    return 0;
}