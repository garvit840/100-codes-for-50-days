#include<stdio.h>
int main()
{//Q22: Write a program to find profit or loss percentage given cost price and selling price.
    float CP , SP, percentage;
    printf("enter C.P and S.P:");
    scanf("%f %f", &CP, &SP);
    
    if(CP>SP){
        percentage= ((CP-SP)/CP)*100;
        printf("loss =  %.2f%%", percentage );
    }
    else if(CP<SP){
        percentage=((SP-CP)/CP)*100;
        printf("profit  = %.2f%%", percentage);

    }
    return 0;
}


