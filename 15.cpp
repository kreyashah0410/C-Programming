#include <stdio.h>
int main()
{
    /* Write a program to convert celcius into fahrenheit */
    float C,F;
    printf("Enter a value.");
    scanf("%f",&C);
    F = (9 * C / 5) + 32;
    printf("%.2f degree celcius is %.2f fahrenheit.\n",C,F);
}
