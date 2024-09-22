/*
Cutesy text program. Convert text into cute txt format 
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input;

    while((input = getchar()) != '\n')
    {
        switch(toupper(input))
        {

            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default :
                putchar(toupper(input));
        }
    }
        
    printf("!!!!!!!!!!!!");

    return 0;

}