#include<stdio.h>
int main()
{//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
    int n;
    float sum=0,i;
    printf("enter n:");
    scanf("%d", &n);

    for(int i=1;i<=2*n;i+=2){
        sum= sum+(float)i/(i+1);

    }
printf("sum of given series is:%.2f",sum);
return 0;
}