#include<stdio.h>
int main()
{//Write a program to calculate the factorial of a number.
    int n, factorial=1;
    printf("enetr n:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
printf("%d", factorial);    
return 0;
}
