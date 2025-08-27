#include <stdio.h>
int main()
{
    /* Write a program to convert dollars into pound. */
    float a,b;
    printf("Enter a number.");
    scanf("%f",&a);
    b = a * 48 / 70;
    printf("%f dollars if %f pounds.\n",a,b);
}
