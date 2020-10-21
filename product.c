// WAP to find the product of two integers of user's choice
#include <stdio.h>
void main()
{
    int a, b;
    int product;
    printf("enter your 1st integer number:\n");
    scanf("%d", &a);
    printf("enter your 2nd integer number:\n");
    scanf("%d", &b);
    product = a * b;
    printf("Product of %d and %d is: %d", a, b, product);
}