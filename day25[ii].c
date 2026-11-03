#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    printf("enter array:");
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("enter k:");
    scanf("%d",&k);
    for(int i=0;i<=k;i++){
        int last=a[n-1];
        for(int i=n-1;i>=0;i--){
            a[i]=a[i-1];
        }
        a[0]=last;

    }
    for(int i=0;i<=n-1;i++){
        printf("%d",a[i]);
    }
    



    
      
    return 0;
}