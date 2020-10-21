// WAP to find reciprocal sum of first n natural number. i.e summation (1/k) k goes from 1 to n
#include <stdio.h>
int main()
{
    int num;

    printf("enter your number:\n");
    scanf("%d", &num);
    float sum = 0.00;
    for (int i = 1; i <= num; i++)
    {
        float n = i;
        sum = sum + (1 / n);
    }

    printf("total sum is: %.2f", sum);
    return 0;
}
