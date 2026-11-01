#include<stdio.h>
int main()
{//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
    int n;
    float sum=1;
    int c=1;
    float t;
    printf("enter n:");
    scanf("%d", &n);

    for(int i=3;c<=n;i+=2){
        t=(i/(i+1));
        sum= sum+t;
        c++;

    }
printf("sum of given series is:%.2f",sum);
return 0;
}