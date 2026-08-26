#include<stdio.h>
int main()
{  
    //Write a program to input a character and check whether it is a vowel or consonant using if–else.

    char character;
    printf("enter character:");
    scanf("%c",&character);

    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' ||character=='A' || character=='E'|| character=='I' || character=='O' || character=='U' ) 
    {
        printf("character is a vowel");
    }
    else{
        printf("charcter is a consonent");
    }
return 0;


}
