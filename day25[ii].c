#include<stdio.h>
    int reverse(int arr[]){
        int i=0;
        int j=5;
        for(int i=0;i<=5;i++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }

        return 0;
    }
    int main(){
    int arr[6]={1,5,4,16,9,10};
    reverse(arr);
    for(int i=0;i<=5;i++)
    {
        printf("%d",arr[i]);
        }    
    
    return 0;
}