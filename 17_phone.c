/*
Convert aplhanumeric phone numbers to all numbers
*/


#include <stdio.h> 
#include <ctype.h>

int main(void)

{
    char input;

    printf("Enter phone number: ");
    
    input = getchar();

    while ((input) != '\n')
    {

    switch (toupper(input))
    {
        case 'A': case 'B': case 'C':
            printf("2");
            break;
        case 'D': case 'E': case 'F':
            printf("3");
            break;
        case 'G': case 'H': case 'I':
            printf("4");
            break;
        case 'J': case 'K': case 'L':
            printf("5");
            break;
        case 'M': case 'N': case 'O':
            printf("6");
            break;
        case 'P': case 'Q': case 'R':
            printf("7");
            break;
        case 'S': case 'T': case 'U':
            printf("8");
            break;
        case 'V': case 'W': case 'X':
            printf("9");
            break;
        case 'Y': case 'Z':
            printf("0");
            break;
        
        default:
        putchar(input);
        
        
    }
    }

    printf("\n\n");

    return 0;
}