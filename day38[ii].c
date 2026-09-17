#include <stdio.h>

int main()
{//Check if a matrix is symmetric.
    int n, a[10][10];
    int flag = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Symmetric");
    else
        printf("Not Symmetric");

    return 0;
}