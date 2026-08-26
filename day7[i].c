#include<stdio.h>
int main()
{\\Write a program to input a year and check whether it is a leap year or not using conditional statements.

    int year;
    printf("enter year:");
    scanf("%d",&year);
    
    if(year%400==0 || year%4==0){
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }
return 0;

}