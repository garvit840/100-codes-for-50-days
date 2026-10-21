#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    //n=4
    int nsp=1;
    int nst=n;
    for(int i=1;i<=2*n+1;i++){
        printf("%d",i);}
    printf("\n");
    for(int l=1;l<=n;l++){ 
        int a=1;   
        for(int k=1;k<=nst;k++){
        printf("%d",a);
        a++;
        }
        for(int j=1;j<=nsp;j++){
            printf(" ");
            a++;
        }
        for(int g=1;g<=nst;g++){
        printf("%d",a);
        a++;
        }
        nst--;
        nsp+=2;
    
        printf("\n");
    }
    
    
    
    return 0;    
    }

