#include <stdio.h>
int main()
{
    /* Write a program to convert kilograms into grams */
    float a,b;
    printf("Enter a number.");
    scanf("%f",&a);
    b = a * 1000;
    printf("%.2f kilograms is %.2f grams.\n",a,b);
}
