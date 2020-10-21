/* WAP to capture inputs and display for variables name , address
and roll number .use different escape sequence characters for displaying the 
formatted output*/
#include <stdio.h>
void main()
{
    char name[20];
    char address[30];
    int rollno;
    printf("Enter your name\n");
    gets(name);
    printf("Enter your address\n");
    scanf("%s", address);
    printf("Enter your roll number\n");
    scanf("%d", &rollno);
    printf("\n");
    printf("Student record\n\n");
    printf("Name:%s\naddress:%s\nrollno:%d\n", name, address, rollno);
}