#include <stdio.h>
int main()
{
    /* Write a program to convert bytes into KB,MB and GB. */
    float a,b,c,d;
    printf("Enter a number.");
    scanf("%f",&a);
    b = a / 1024;
    c = b / 1024;
    d = c / 1024;
    printf("%f bytes is equal to %f KB.\n",a,b);
    printf("%f bytes is equal to %f MB.\n",a,c);
    printf("%f bytes is equal to %f GB.\n",a,d);
}
