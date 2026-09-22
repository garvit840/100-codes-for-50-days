#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C;
    printf("enter A,B,C for eq Ax^62+Bx+C:");
    scanf("%d %d %d",&A,&B,&C);
    float d=sqrt(B*B-4*A*C);
    float root1=(-B+d)/(2*A);
    float root2=(-B-d)/(2*A);
    printf("roots of eq are %f, %f",root1,root2);
    return 0;

    

}




