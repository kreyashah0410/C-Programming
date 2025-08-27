#include <stdio.h>
int main()
{
    /* Write a program to convert grams into kg. */
    float a,b;
    printf("Enter a number.");
    scanf("%f",&a);
    b = a / 1000;
    printf("%.3f grams is %.3f kilograms",a,b);
}
