#include<Stdio.h>
int main()
{

    int n;
    int sum=0;
    printf("enter n:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
        sum=sum+i;
    }
    }
    printf("sum of first n odd no is:%d",sum);
return 0;
}