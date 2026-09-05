#include<Stdio.h>
int main()
{//Write a program to print the product of even numbers from 1 to n
    int n,product=1;
    printf("enter n:");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        if(i%2==0){
            product = product*i;
        }
    }
    printf("%d", product);    
    return 0;
}









