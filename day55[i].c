#include <stdio.h>

int main()
{//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
    int n, k, arr[100];
    int maxSum;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    maxSum = 0;

    for(int i = 0; i < k; i++)
    {
        maxSum += arr[i];
    }

    for(int i = 1; i <= n - k; i++)
    {
        int sum = 0;

        for(int j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}