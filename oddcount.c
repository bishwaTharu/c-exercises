/* WAP to count total number of odd numbers from 1 to 50.*/
#include <stdio.h>
int main()
{
    int count = 0;                // decalre int type variable intially set at 0
    for (int i = 1; i <= 50; i++) // Here i goes from 1 to 50
    {
        if (i % 2 != 0) //  checks only odd number
        {
            count++; //counts get increased by one in each loop
        }
    }
    printf("total count is :%d", count);
    return 0;
}