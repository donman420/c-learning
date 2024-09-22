/* Write a program that counts the number of vowels (a, e, i, o. and u) 
*  in a sentence:
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input;
    int vowelcount;

    vowelcount = 0;

    printf("Enter a sentence: ");

    while((input = getchar()) != '\n')
    {
        switch(tolower(input))
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vowelcount += 1;
                break;
        }
    }

    printf("\nYour sentence contains %d vowels.\n", vowelcount);


}