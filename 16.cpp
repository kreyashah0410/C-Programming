#include <stdio.h>
int main()
{
    /* Write a program to convert fahrenheit into celcius */
    float F,C;
    printf("Enter a value.");
    scanf("%f",&F);
    C = 5 * (F - 32) / 9;
    printf("%f fahrenheit is equal to %f degree celcius.\n",F,C);
}
