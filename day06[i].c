#include <stdio.h>

int main() {
    int n;
    printf("enter n:");
    scanf("%d", &n);

    if(n>=0){
        if(n==0){
            printf("n is zero");
        }
            else{
                printf("n is possitive");
            }
    }
    else{
        printf("n is negative integer");

    }
    return 0;
}