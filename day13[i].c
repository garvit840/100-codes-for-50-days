#include<stdio.h>
int main()
{
    int a, b;
    char op;
    printf("enter a, b and op:");
    scanf("%d %d %ch", &a, &b, &op);

    switch(op){
        case '+': printf("%d", a+b);
                break;
    
        case '*': printf("%d", a*b);
                break;
        case '%': 
            if(b!=0){
        printf("%d", a%b);
                
            }
            else{
                printf("divison by zero is not allowed");
                  }
            break;
        case '/': 
        if (b!=0){
            printf("%d", a/b);
        }
        else{
            printf("divison by zero is not allowed");
        }
                break;
        default : printf("not a valid character");
                break;
    }
return 0;
 }                     









