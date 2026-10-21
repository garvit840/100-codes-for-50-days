#include <stdio.h>

int main()
{//Negative Integer in Every Window of Size k.
    int n, k, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; i <= n - k; i++)
    {
        int found = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("0 ");
        }
    }

    return 0;
}