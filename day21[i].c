#include <stdio.h>

int main()
{//Write a program to swap the first and last digit of a number
    int num, temp, first, last, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    result = num - first * power - last;
    result = result + last * power + first;

    printf("Number after swapping = %d", result);

    return 0;
}