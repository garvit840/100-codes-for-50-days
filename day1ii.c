#include<stdio.h>
int main()
{ //Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
    int a;
    printf("enter a:");
    scanf("%d", &a);

    int b;
    printf("enter b:");
    scanf("%d", &b);
    
    int sum = a+b, difference = a-b, product = a*b;
    float quotient = a/b;
    printf("sum of a and b is:%d\n", sum);
    printf("difference of a and b is:%d\n", difference);
    printf("product of a and b is:%d\n", product);
    printf("quotient of a and b is:%f\n", quotient);
    return 0;
}
