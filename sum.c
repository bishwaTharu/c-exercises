// WAP to read values into any two floating point variables and
// compute their sum and print it upto 2 decimal places.
#include <stdio.h>
int main()
{
    // let define two floating variables
    float a, b;
    // let define float type variable to store their sum
    float sum;
    printf("Enter your 1st floating number :\n");
    scanf("%f", &a); // reads the floating variable entered by the user
    printf("Enter your 2nd floating number:\n");
    scanf("%f", &b);
    sum = a + b;
    printf("the sum of a and b is: %.2f", sum);
    return 0;
}