#include <stdio.h>

int main() {
    int a;
    printf("enter a:");
    scanf("%d", &a);

    if(a%2==0  || a==0){
        printf("a is a even no");
    }
    else
    {
        printf("a is odd no");
    }
return 0;   
}