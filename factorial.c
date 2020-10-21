// WAP to find factorial of an input number n using recurssion
// factorial(0)=1 and factorial(2)=2*1=2
#include <stdio.h>
int factorial(int i)
{

    if (i == 0 || i == 1)
    {
        return 1; //returns the output
    }
    else
    {
        return i * factorial(i - 1); // function calling itself
    }
    return 0;
}

void main()
{
    int n;
    int result;
    printf("Enter your number to find factorial:\n");
    scanf("%d", &n);
    result = factorial(n);
    printf("Factorial(%d)= %d ", n, result);
}