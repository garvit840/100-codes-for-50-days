#include<stdio.h>
int main()
{
    int radius;
    printf("enter radius:");
    scanf("%d", &radius);

    float area = 3.14*radius*radius, circumfrence = 2*3.14*radius;
    printf("area of circle is:%f\n",area);
    printf("circumfrence of circle is:%f", circumfrence);
    return 0;
    
}