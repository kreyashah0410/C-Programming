#include<stdio.h>

int main()
{
    /* Calculate net salary. */
    int gross_salary,all,ded,net;
    printf("Enter gross salary:\n");
    scanf("%d",&gross_salary);
    ded = 3 * gross_salary/100;
    printf("Deduction is %d\n",ded);
    all = 10 * gross_salary/100;
    printf("Allowance is %d\n",all);
    net = gross_salary + all - ded;
    printf("Net salary is %d\n",net);
    return 0;
}
