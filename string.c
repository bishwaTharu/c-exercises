// WAP to capture input and display outputs for characters
// Here we use gets() and puts() to read and display characters or string
#include <stdio.h> //It's a header file ,Yo!
void main()        // from here the program starts to excute
{
    char string[20];
    /*declare char type variable 
     capable of storing 20 bytes of character in my architecter*/
    printf("Enter your word:\n");
    gets(string); // inputs the multiple character i.e words with spaces
    puts(string); //gives output
}