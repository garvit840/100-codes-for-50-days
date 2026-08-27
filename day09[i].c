#include<stdio.h>

#include<math.h>
int main()

{//Write a program to find the roots of a quadratic equation and categorize them.
    float a, b, c;
    float d, root1, root2;

    printf("enter a,b,c:");
    scanf("%f %f %f", &a, &b, &c);
    
    d = b*b-4*a*c;

    if(d>0){
        root1= (-b - sqrt(d))/(2*a);
        root2 = (-b + sqrt(d))/(2*a);
        printf("roots are diff and real: %.2f %.2f", root1, root2);
    }
    else if(d==0){
        root1 = (-b/(2*a));
        printf("roots are same and real:%.2f", root1);
    }
    else{
        printf("roots are complex");
    }
return 0;
}