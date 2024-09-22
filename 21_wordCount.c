/*
* Average word length for sentence.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input;
    int wordcount, chartotal;

    printf("gg");

    while((input = getchar()) != '\n')
    {
        do
        {
            chartotal++;
        }
        while(input != ' ');
        wordcount++;
    }

    printf("The average words per sentence is %.1f", (float) chartotal / wordcount);

    return 0;
    
}