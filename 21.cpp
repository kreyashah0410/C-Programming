#include <stdio.h>
int main()
{
    /* Write a program to calculate area of a triangle. */
    int L,H;
    printf("Enter the value of length and height");
    scanf("%d %d",&L,&H);
    printf("Area of triangle with length %d and height %d is %d\n",L,H,L*H/2);
}
