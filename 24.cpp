#include<stdio.h>

int main()
{
    /* Calculate total and average of three marks */
    float M,C,P,T,A;
    printf("Enter the marks of mathematics.\n");
    scanf("%f",&M);
    printf("Enter the marks of chemistry.\n");
    scanf("%f",&C);
    printf("Enter the marks of physics.\n");
    scanf("%f",&P);
    T = M  + C + P;
    printf("The total marks of all the three subjects is %.2f\n",T);
    A = T/3;
    printf("The average marks of three subjects is %.2f\n",A);
    return 0;
}
