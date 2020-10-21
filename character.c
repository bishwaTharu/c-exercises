// WAP to read a character and display it using getc and putc
//  Eg input='c' output='c' c is a character
#include <stdio.h>
int main()
{
    char character;
    printf("Enter your character:\n");
    character = getchar(); //getchar read the character entered by the user

    putchar(character); //putchar displays the character i.e output
    return 0;
}