#include<stdio.h>
int main()
{ //Q1: Write a program to input two numbers and display their sum.
    int a;
    printf("enter a:");
    scanf("%d", &a);

    int b;
    printf("enter b:");
    scanf("%d", &b);
    
    int sum = a+b;
    printf("sum of a and b is:%d", sum);
    return 0;
}