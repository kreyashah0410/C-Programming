#include<stdio.h>

int main()
{
    /* Swap two values */
    int a,b,t;
    printf("Enter the first number.\n");
    scanf("%d",&a);
    printf("Enter the second number.\n");
    scanf("%d",&b);
    t = a;
    a = b;
    b = t;
    printf("After swapping\n");
    printf ("The first number is %d and the second number is %d\n",a,b);

}
