// WAP using do while loop to illustrate the use of increment operator.
#include <stdio.h>
void main()
{
    int num; //declare int type variable i.e num
    int i = 0;
    printf("enter your number:\n");
    scanf("%d", &num);
    do
    {
        i++;           // i=i+1  for more info: value of  get increased by one in each loop
    } while (i < num); // when i equals to num do while loop breaks
    printf("value of i is: %d", i);
}