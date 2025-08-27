#include <stdio.h>
int main()
{
    /* Write a program to convert dollars into rupees. */
    float a,b;
    printf("Enter a number.");
    scanf("%f",&a);
    b = a * 48;
    printf("%.2f dollars is %.2f rupees.\n",a,b);
}
