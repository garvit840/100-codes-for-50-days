#include <stdio.h>

int main()
{//Write a program to find the 1’s complement of a binary number and print it.  
    long long num, complement = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    while (num > 0)
    {
        digit = num % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;
        place = place * 10;
        num = num / 10;
    }

    printf("1's complement = %lld", complement);

    return 0;
}