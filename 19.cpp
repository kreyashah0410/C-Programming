#include <stdio.h>
int main()
{
    /* Write a program to calculate the area and perimeter of rectangle. */
    int L,B;
    printf("Enter the value of sides.");
    scanf("%d %d",&L,&B);
    printf("The perimeter of rectangle with sides %d and %d is %d\n",L,B,2*(L+B));
    printf("The area of rectangle with sides %d and %d is %d\n",L,B,L*B);
}
