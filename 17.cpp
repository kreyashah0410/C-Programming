#include <stdio.h>
int main()
{
    /* Write a program to calculate interest */
    int P,R,T,S;
    printf("Enter the initial amount borrowed or invested.");
    scanf("%d",&P);
    printf("Enter the annual interest rate.");
    scanf("%d",&R);
    printf("Enter the time period for which the money is borrowed or invested (in year(s)).");
    scanf("%d",&T);
    S = P*R*T/100;
    printf("The interest is %d",S);
}
