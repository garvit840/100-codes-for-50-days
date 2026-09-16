#include<stdio.h>
int main()
{// Write a program to print all factors of a given number.

int n,i;
printf("enter n:");
scanf("%d", &n);
printf("factor of %d are ", n);
for(int i=1;i<=n;++i)
{
    if(n%i==0){
        printf("%d", i);
    }
} 
printf("\n"); 
return 0;
}