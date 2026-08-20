#include<stdio.h>
int main()
{//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
    double celcius, fahrenheit;
    printf("enter temperture in celcius:");
    scanf("%lf", &celcius);

    fahrenheit = (celcius*9/5)+32;
    printf("temperature in fahrenheit:%g", fahrenheit);
    return 0;
}