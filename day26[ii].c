#include<stdio.h>
int main()
{/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
    int i,j;
    printf("*\n\n");
    for(i=1;i<=5;i++){
        printf("*\n");    
    }
    for(j=1;j<=3;j++){
        printf("*\n");
    }
    printf("/n");
    printf("*");
return 0;
}