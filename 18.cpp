#include <stdio.h>
int main()
{
    /* Find area and perimeter of square. */
    int a;
    printf("Enter the value of side.");
    scanf("%d",&a);
    printf("The perimeter of square with side %d is %d\n",a,4*a);
    printf("The area of square with side %d is %d\n",a,a*a);
}
