// WAP to calculate the compound intrest
// CI= P*((1+(r/100)))pow(t)
#include <stdio.h>
#include <math.h>
void main()
{
    float principal;
    float rate;
    float time;
    float result;
    printf("Enter the principal in Rs:\n");
    scanf("%f", &principal);
    printf("Enter the rate in percentage:\n");
    scanf("%f", &rate);
    printf("Enter the time in years:\n");
    scanf("%f", &time);

    result = pow((1 + (rate / 100)), time); //pow(base,power) say: base=5 ,power=10 ---> 5^10.
    float CI = principal * result;
    printf("the compound intrest is : %.3f", CI);
}