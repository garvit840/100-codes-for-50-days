#include<stdio.h>
int  main()
{//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
    int n;
    float sum=0;
    printf("enter n:");
    scanf("%d", &n);
    for(int i=2;i<=2*n;i=i+2){
        sum=sum+(float)i/(2*i-1);
    }

printf("sum of series is:%.2f",sum);
return 0;
}
