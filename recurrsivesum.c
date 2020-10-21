// WAP to find the sum from 1 to 10 using recurrsion
#include <stdio.h>
int sum(int num) //function prototye
{                //function defintion
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num + sum(num - 1); // function call itself until sum(0)=0;
    }
}
void main()
{
    int result;
    result = sum(10); // function call
    printf("the sum from 1 to 10 is : %d", result);
}