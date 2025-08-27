#include <stdio.h>
int main()
{
    /* Write a program to convert rupees into dollars. */
    float a,b;
    printf("Enter a number.");
    scanf("%f",&a);
    b = a / 48;
    printf("%f rupees is equal to %f dollars.\n",a,b);
}
