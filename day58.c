#include <stdio.h>

int main()
{//product of Array Except Self
    int n, arr[100], answer[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        int product = 1;

        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                product = product * arr[j];
            }
        }

        answer[i] = product;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}