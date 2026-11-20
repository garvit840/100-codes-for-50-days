#include<stdio.h>
#include<string.h>
int main(){
     typedef union member{
        int a;
        float b;
        char ch[40];
    } member;

    member y;
    y.a=34;
    y.b=3.34;
    strcpy(y.ch,"garvit");
    printf("%d\n",y.a);
    printf("%.2f\n",y.b);
    printf("%s",y.ch);


    
    return 0; 

}