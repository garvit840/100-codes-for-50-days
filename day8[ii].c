#include<stdio.h>
int main()
{//Write a program to input three numbers and find the largest among them using if–else.

    int a, b, c;
    printf("enter a, b, c:");
    scanf("%d %d %d", &a, &b, &c);

    if(a>=b && a>=c){
        printf("a is laregest number");
    }
    else if(b>=a && b>=c){
        printf("b is largest number");
    }
    else{
        printf("c is largest number");
    }
return 0;



}