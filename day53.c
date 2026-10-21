#include <stdio.h>

int main()
{//Find the Pivot Index
    int n, arr[100];
    int leftsum = 0, rightsum = 0;
    int pivot = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        leftsum = 0;
        rightsum = 0;

        for(int j = 0; j < i; j++)
        {
            leftsum += arr[j];
        }

        for(int j = i + 1; j < n; j++)
        {
            rightsum += arr[j];
        }

        if(leftsum == rightsum)
        {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}