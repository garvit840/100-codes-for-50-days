#include<stdio.h>
int main()
{//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

    char character;
    printf("enter character:");
    scanf("%c", &character);

    if(character>='A' && character<='Z'){
        printf("uppepr case character");
    }
    else if(character>='a' && character<'z'){
        printf("character is lower case ");
    }
    else if(character>'0' && character<='9'){
        printf("character is digit");
    }
    else{
        printf("special character");
    }
}