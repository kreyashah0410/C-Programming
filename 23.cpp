#include<stdio.h>

int main()
{
    /* Calculate net sales. */
    int gross_sales,discount,net;
    printf("Enter gross sales:\n");
    scanf("%d",&gross_sales);
    discount = 10 * gross_sales/100;
    printf("Discount is %d\n",discount);
    net = gross_sales - discount;
    printf("Net sales are %d\n",net);
    return 0;
}
