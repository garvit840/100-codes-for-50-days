#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("enter num:");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        printf("num is a perfect number");
    }
    else{
    printf("num is not a perfect number");
    }
return 0;
}    