#include<stdio.h>
int main()
{/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
    int days, fine;
    printf("enter extra days:");
    scanf("%d", &days);

    if(days>30){
        printf("Membership cancelled");
    }
    else if(days<=5){
        fine= days*2;
        printf("%d", fine);
    }
    else if(days<=10){
        fine= (days-5)*4+(5*2);
        printf("%d", fine);
    }
    else {
        fine=(days-10)*6+(5*2)+(5*4);
        printf("%d", fine);
    }
return 0;
}