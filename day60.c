#include <stdio.h>

int main()
{//Maximum Element in Each Subarray of Size k
    int n, k, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++)
    {
        int max = arr[i];

        for(int j = i; j < i + k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}