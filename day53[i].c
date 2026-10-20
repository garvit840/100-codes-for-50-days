#include <stdio.h>

int main()
{//Find the Majority Element
    int n, arr[100];
    int majority = -1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            majority = arr[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}