#include<stdio.h>
int main()
{
    int a, b and x;
    printf("enter a, b ");
    scanf("%d %d", &a, &b);

    x = a;
    a = b;
    b = x;

    printf("numbers after swapping:%d %d\n", a, b);
    return 0;
    
}