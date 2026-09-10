#include<stdio.h>
int main()
{//finding hcf
    int n1,n2,Hcf,i;
    printf("enter two numbers to find there hcf:");
    scanf("%d %d", &n1, &n2);

    for(int i=1;i<=n1 &&  i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0);
        {
            Hcf=i;
        }
    }
    printf("Hcf is:%d", Hcf);
    return 0;

}