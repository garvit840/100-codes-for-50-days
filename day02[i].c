#include<stdio.h>
int main()
{ //Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
    int length;
    printf("enter length:");
    scanf("%d", &length);

    int breadth;
    printf("enter bredath:");
    scanf("%d", &breadth);

    int area = length*breadth, perimeter = 2*(length+breadth);
    printf("area of rectangle is:%d\n", area);
    printf("perimeter of rectangle is:%d", perimeter);
    return 0; 

}