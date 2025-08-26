#include <stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("Enter two numbers.");
    scanf("%f %f",&a,&b);
    c = a + b;
    printf("The sum of %f and %f is %f\n",a,b,c);
    d = a - b;
    printf("%f minus %f is %f\n",a,b,d);
    e = a * b;
    printf("%f multiplied by %f is %f\n",a,b,e);
    f = a / b;
    printf("%f divided by %f is %f\n",a,b,f);
}
