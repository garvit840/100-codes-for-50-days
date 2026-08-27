#include<stdio.h>
int main()

{//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
    int a,b,c;
    printf("enter sides of triangle a,b,c:");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c ){
        printf("equilateral triangle");
    }
    else if(a==b || b==c || a==c){
        printf("isosceles triangle");
    }
    else{
        printf("scalar triangle");
    }
return 0;    
}